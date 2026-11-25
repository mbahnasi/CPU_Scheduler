#include "Simulator.h"
#include  "Policy.h"
#include "Process.h"
#include <bits/stdc++.h>
using namespace std ;
Simulator::Simulator(Policy &used_policy, vector<Process> generated) {
    this->used_policy = &used_policy ;
    this->generated_p = generated ;
}

void Simulator::allocate_to_CPU(Process& running, int &exec_start_time, int process_idx) {
    int i = process_idx ;
    if (generated_p[i].get_arrival_time() <= time)
        used_policy->add(generated_p[i]), i ++ ;

    Process next = used_policy->next(running, exec_start_time, time) ;
    if (next.get_pid() != running.get_pid()) {
        running = next ;
        exec_start_time = time ;
    }

    time ++ ;
}

void Simulator::run() {
    // generate the processes and put them in generated_p

    sort(generated_p.begin(), generated_p.end(),[&](Process a, Process b) {
        return a.get_arrival_time() < b.get_arrival_time() ;
    }) ;

    Process running{};
    int exec_start_time = 0 ;
    int sz = generated_p.size() , i =0 ;


    for ( ;i < sz ;) {

        allocate_to_CPU(running, exec_start_time, i) ;
    }


    while (!used_policy->empty()) {

        allocate_to_CPU(running, exec_start_time, 0) ;

    }


    // logs about each process will be returned here (target : avg waiting time , gnatt chart)

}
