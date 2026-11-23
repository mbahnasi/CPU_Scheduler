#include "Process.h"

int Process::cur_id = 0 ;

Process::Process(int arrival_time, int burst_time) {
    this->pid = cur_id++ ;
    this->arrival_time = arrival_time ;
    this->burst_time = burst_time ;
    this->rem_time = burst_time ;
}

int Process::get_pid() {
    return pid ;
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

