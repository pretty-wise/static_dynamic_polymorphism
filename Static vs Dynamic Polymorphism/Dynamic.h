//
//  Dynamic.h
//  Static vs Dynamic Polymorphism
//
//  Created by Krzysiek Stasik on 3/20/13.
//  Copyright (c) 2013 Krzysiek Stasik. All rights reserved.
//

#ifndef __Static_vs_Dynamic_Polymorphism__Dynamic__
#define __Static_vs_Dynamic_Polymorphism__Dynamic__


//!--------------------------------------------------------------------------------
namespace Dynamic{
//!--------------------------------------------------------------------------------

class Base
{
public:
    Base() : m_basic_work(1) {}
    int ExecuteWork();
    
    virtual int ExecuteDerivedWork() = 0;
    virtual bool CanDoWork() = 0;
    
protected:
    int ExecuteCommonWork() { return m_basic_work; }
    
private:
    int m_basic_work;
};

//!--------------------------------------------------------------------------------

class WorkerA : public Base
{
public:
    WorkerA(int work) : m_derived_work(work){}
    
    int ExecuteDerivedWork() { return m_derived_work; }
    
    bool CanDoWork() { return true; }
    
private:
    int m_derived_work;
};

//!--------------------------------------------------------------------------------
} // namespace Dynamic
//!--------------------------------------------------------------------------------

#endif /* defined(__Static_vs_Dynamic_Polymorphism__Dynamic__) */
