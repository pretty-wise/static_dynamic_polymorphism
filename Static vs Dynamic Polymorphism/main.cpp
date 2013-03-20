//
//  main.cpp
//  Static vs Dynamic Polymorphism
//
//  Created by Krzysiek Stasik on 3/20/13.
//  Copyright (c) 2013 Krzysiek Stasik. All rights reserved.
//

#include "Static.h"
#include "Dynamic.h"
#include <iostream>

int main(int argc, const char * argv[])
{
    Static::WorkerA static_worker(5);
    int static_work_done = static_worker.ExecuteWork();
    printf("static work done: %i\n", static_work_done);
    
    
    Dynamic::WorkerA dynamic_worker(5);
    int dynamic_work_done = dynamic_worker.ExecuteWork();
    printf("dynamic work done: %i\n", dynamic_work_done);
    
    return 0;
}

