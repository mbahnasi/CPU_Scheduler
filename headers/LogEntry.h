# pragma once

class LogEntry {
    int pid ;
    int start ;
    int end ;
public:
    LogEntry(int pid, int start, int end) ;
    int get_pid();
    int get_start() ;
    int get_end() ;
};