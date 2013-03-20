//
//  Dynamic.cpp
//  Static vs Dynamic Polymorphism
//
//  Created by Krzysiek Stasik on 3/20/13.
//  Copyright (c) 2013 Krzysiek Stasik. All rights reserved.
//

#include "Dynamic.h"

//!--------------------------------------------------------------------------------
namespace Dynamic{
//!--------------------------------------------------------------------------------

int Base::ExecuteWork()
{
    int work_done = ExecuteCommonWork();
    
    if( CanDoWork() ) // vtable dispatching here..
        work_done += ExecuteDerivedWork(); // and here.
    
    return work_done;
}

//!--------------------------------------------------------------------------------
} // namespace Dynamic
//!--------------------------------------------------------------------------------