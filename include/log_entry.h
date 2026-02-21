#ifndef LOG_ENTRY_H
#define LOG_ENTRY_H

#include <string>

struct LogEntry {
    std::string month;
    int day;
    std::string time;
    std::string host;
    std::string service;
    std::string message;
};

#endif