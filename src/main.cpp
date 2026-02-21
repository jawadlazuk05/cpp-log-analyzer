#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "../include/log_entry.h"

using namespace std;

// Parse one line of auth log
LogEntry parseLine(const string& line) {
    LogEntry entry;
    stringstream ss(line);

    ss >> entry.month >> entry.day >> entry.time >> entry.host;

    string rest;
    getline(ss, rest);

    // split service and message
    size_t colonPos = rest.find(':');
    if (colonPos != string::npos) {
        entry.service = rest.substr(1, colonPos - 1);
        entry.message = rest.substr(colonPos + 1);
    }

    return entry;
}

int main() {
    ifstream file("data/sample_auth.log");

    if (!file) {
        cerr << "Error: cannot open log file.\n";
        return 1;
    }

    vector<LogEntry> logs;
    string line;

    while (getline(file, line)) {
        if (!line.empty()) {
            logs.push_back(parseLine(line));
        }
    }

    cout << "Total log entries: " << logs.size() << endl;

    // print first few entries
    cout << "\nFirst entries:\n";
    for (size_t i = 0; i < logs.size() && i < 3; i++) {
        cout << logs[i].month << " "
             << logs[i].day << " "
             << logs[i].service << " -> "
             << logs[i].message << endl;
    }

    return 0;
}