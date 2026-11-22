#pragma once
#include<Process.h>

class Policy {
public:
    virtual Process next() = 0 ;
    virtual void dispatch_next() = 0 ;
    virtual void add(Process) = 0 ;
    virtual bool empty() = 0 ;
    virtual ~Policy() = default ;
};