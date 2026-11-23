#include "Simulator.h"
#include  "Policy.h"
#include "Process.h"
#include <bits/stdc++.h>
using namespace std ;
Simulator::Simulator(Policy &used_policy) {
    this->used_policy = &used_policy ;
}

void Simulator::run() {
    // generate the processes and put them in generated_p

    sort(generated_p.begin(), generated_p.end(),[&](Process a, Process b) {
        return a.get_arrival_time() < b.get_arrival_time() ;
    }) ;

    for (auto p : generated_p) {
        used_policy->add(p) ;
    }

    Process cur = {-1 -1 , -1 };
    int exec_start_time = 0 ;

    while (!used_policy->empty()) {

        Process next = used_policy->next(cur, exec_start_time, time) ;
        if (next.get_pid() != cur.get_pid()) {
            cur = next ;
            exec_start_time = time ;
        }
        time ++ ;
    }

    // logs about each process will be returned here (target : avg waiting time , gnatt chart)

}
