#include "LogEntry.h"

LogEntry::LogEntry(const int pid, const int start, const int end) {
    this->pid = pid ;
    this->start = start ;
    this->end = end ;
}

int LogEntry::get_pid() {
    return pid ;
}

int LogEntry::get_start() {
    return start ;
}

int LogEntry::get_end() {
    return end ;
}
