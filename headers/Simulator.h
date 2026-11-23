#pragma once
#include <bits/stdc++.h>

#include "Process.h"
#include "Policy.h"
using namespace std ;

class Simulator {
    vector<Process> generated_p ;
    Policy * used_policy ;
    int time{} ;

public:
    Simulator(Policy& used_policy);
    void run() ;
};