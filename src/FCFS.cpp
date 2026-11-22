#include <bits/stdc++.h>
#include "Process.h"
#include "Policy.h"
#include "FCFS.h"

bool FCFS::empty() {
    return p_queue.empty() ;
}

Process FCFS::next() {
    // the queue can't be empty when this function is called - consider adding and exception here
    return p_queue.front() ;
}

void FCFS::dispatch_next() {
    if (!p_queue.empty())
        p_queue.pop() ;
}

void FCFS::add(Process p) {
    p_queue.emplace(p) ;
}
