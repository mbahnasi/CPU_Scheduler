#pragma once
#include<Process.h>

class Policy {
public:
    virtual Process next(Process cur, int exec_start_time, int cur_time) = 0 ;
    virtual void add(Process) = 0 ;
    virtual bool empty() = 0 ;
    virtual ~Policy() = default ;
};