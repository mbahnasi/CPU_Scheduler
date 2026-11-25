#include <bits/stdc++.h>
#include "Process.h"
#include "Policy.h"
#include "FCFS.h"

bool FCFS::empty() {
    return p_queue.empty() ;
}

Process FCFS::next(Process cur, int exec_start_time, int cur_time) {

    auto p = cur ;
    if (cur.get_pid() == -1 || cur_time - exec_start_time == cur.get_burst_time() ) {
        // if CPU is idle or the current process has finished
        if (empty())
            p = Process{} ;
        else{
            p = p_queue.front();
            p_queue.pop() ;
        }
    }
    return p ;
}


void FCFS::add(Process p) {
    p_queue.emplace(p) ;
}
