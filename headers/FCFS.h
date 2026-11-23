#pragma once
#include <bits/stdc++.h>
#include "Process.h"
#include "Policy.h"
using namespace std ;


class FCFS : Policy {
private:
    queue<Process> p_queue ;
public:
    Process next(Process cur, int exec_start_time, int cur_time) override;
    void add(Process) override ;
    bool empty() override;
};