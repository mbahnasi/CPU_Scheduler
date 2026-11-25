#pragma once

class Process {
private:
    static int cur_id ;
    int pid{} ;
    int arrival_time{} ;
    int burst_time{} ;
    int rem_time{} ;
public:
    Process();
    Process(int arrival_time, int burst_time) ;
    int get_pid() ;
    int get_arrival_time() ;
    int get_burst_time() ;
    int get_rem_time() ;
    void set_rem_time(int new_rem) ;
};