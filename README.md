# C++ Log Analyzer

A modular C++ application that parses and summarizes system authentication logs.
Designed to demonstrate file I/O, structured data modeling, and basic log analysis in modern C++.

---

## 📸 Example Output

```
Total log entries: 5

First entries:
Jan 10 sshd -> Accepted password for user1
Jan 10 sshd -> Failed password for invalid user admin
Jan 10 sudo -> user1 executed command
```

---

## 🚀 Features

* Parses auth.log–style entries
* Structured log storage using C++ structs
* Dynamic data handling with STL vectors
* Robust line parsing with stringstream
* Clean modular project layout
* Automated builds via Makefile
* Cross-platform command-line execution

---

## 🛠️ Tech Stack

| Category        | Tools                                  |
| --------------- | -------------------------------------- |
| Language        | C++17                                  |
| Libraries       | STL (vector, string, fstream, sstream) |
| Build System    | Makefile                               |
| Version Control | Git & GitHub                           |
| Editor          | VS Code                                |

---

## 📂 Project Structure

```
cpp-log-analyzer/
├── src/
│   └── main.cpp
├── include/
│   └── log_entry.h
├── data/
│   └── sample_auth.log
├── Makefile
└── README.md
```

---

## 🔧 Build

### Using Makefile (recommended)

```bash
make
```

### Manual compile (fallback)

```bash
g++ -std=c++17 -Wall src/main.cpp -o log_analyzer
```

---

## ▶️ Run

### Windows

```bash
.\log_analyzer
```

### macOS / Linux

```bash
./log_analyzer
```

---

## 🧠 What This Project Demonstrates

* File input/output in C++
* Struct-based data modeling
* Vector usage and iteration
* String parsing and tokenization
* Defensive error handling
* Professional project organization
* Git version control workflow

---

## 🔍 Sample Log Format

The analyzer expects lines similar to:

```
Jan 10 10:15:32 server sshd: Accepted password for user1
```

---

## 🔮 Future Improvements

Planned enhancements:

* [ ] Failed login counter
* [ ] User search/filter
* [ ] Date range filtering
* [ ] Summary statistics dashboard
* [ ] Unit tests

---

## 🧪 How to Extend

Good beginner extensions:

* Count failed SSH attempts
* Identify most active users
* Detect suspicious login patterns
* Add command-line arguments

---

## 👤 Author

**Jawad Lazuk**

---

## ⭐ Notes

This project was built as part of early C++ and software development practice, focusing on clean code structure and real-world style log processing.

