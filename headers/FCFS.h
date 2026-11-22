#pragma once
#include <bits/stdc++.h>
#include "Process.h"
#include "Policy.h"
using namespace std ;

struct CompareProcess {
    bool operator()(Process a, Process b) {
        return a.get_arrival_time() > b.get_arrival_time() ;
    }
};


class FCFS : Policy {
private:
    priority_queue<Process, vector<Process>,CompareProcess > p_queue ;
public:
    Process next() override;
    void dispatch_next() override;
    void add(Process) override ;
    bool empty() override;
};