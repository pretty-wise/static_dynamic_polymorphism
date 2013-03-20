//
//  Static.h
//  Static vs Dynamic Polymorphism
//
//  Created by Krzysiek Stasik on 3/20/13.
//  Copyright (c) 2013 Krzysiek Stasik. All rights reserved.
//

#ifndef __Static_vs_Dynamic_Polymorphism__Static__
#define __Static_vs_Dynamic_Polymorphism__Static__

//!--------------------------------------------------------------------------------
namespace Static{
//!--------------------------------------------------------------------------------

template<class Devived>
class TBase
{
public:
    TBase() : m_basic_work(1) {}
    int ExecuteWork();
    
protected:
    int ExecuteCommonWork() { return m_basic_work; }
    
private:
    int m_basic_work;
};
    
//!--------------------------------------------------------------------------------

class WorkerA : public TBase<WorkerA>
{
public:
    WorkerA(int work) : m_derived_work(work){}
    
    int ExecuteDerivedWork() { return m_derived_work; }
    
    static bool CanDoWork() { return true; }
    
private:
    int m_derived_work;
};

//!--------------------------------------------------------------------------------
//!--------------------------------------------------------------------------------
    
template<class Derived>
int TBase<Derived>::ExecuteWork()
{
    int work_done = ExecuteCommonWork();
    
    if( Derived::CanDoWork() ) // compile time dispatching here..
        work_done += static_cast<Derived*>(this)->ExecuteDerivedWork(); // and here.
    
    return work_done;
}
    
//!--------------------------------------------------------------------------------
} // namespace Static
//!--------------------------------------------------------------------------------

#endif /* defined(__Static_vs_Dynamic_Polymorphism__Static__) */
