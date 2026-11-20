#include "Process.h"

Process::Process(int pid, int arrival_time, int burst_time) {
    cur_id = 0 ;
    this->pid = pid ;
    this->arrival_time = arrival_time ;
    this->burst_time = burst_time ;
}

int Process::get_arrival_time()  {
    return arrival_time ;
}

int Process::get_burst_time() {
    return burst_time ;
}

int Process::get_rem_time() {
    return rem_time ;
}

void Process::set_rem_time(int new_rem) {
    rem_time = new_rem ;
}

