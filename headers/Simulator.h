#pragma once
#include <bits/stdc++.h>

#include "Process.h"
#include "Policy.h"
using namespace std ;

class Simulator {
    vector<Process> generated_p ;
    Policy * used_policy ;
    int time{} ;
    void allocate_to_CPU(Process &running, int &exec_start_time, int process_idx) ;
public:
    Simulator(Policy& used_policy);
    void run() ;
};