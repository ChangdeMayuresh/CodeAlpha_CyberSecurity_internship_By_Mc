# 🔒 Task 3: Secure Coding Review

## 📌 Objective
Select a programming language and application to audit, perform a code review to identify security vulnerabilities, and provide recommendations and best practices for secure coding[cite: 2]. 

## 🛠️ Audit Details
- **Language Audited:** C++
- **Method Used:** Manual Inspection[cite: 2]
- **Vulnerability Identified:** Buffer Overflow (CWE-120)

## 📄 Documented Findings
During the code review of `vulnerable_app.cpp`, a critical vulnerability was identified[cite: 2]:
- The `processUserInput` function allocates a fixed 15-byte character array (`buffer`). 
- It uses the outdated `strcpy()` function to copy user input into this buffer. 
- **The Threat:** Because `strcpy()` does not verify the length of the source string, an input exceeding 14 characters overwrites adjacent memory. Attackers can exploit this to crash the application or inject malicious code.

## 🛡️ Remediation Steps & Best Practices
To create safer code, the following remediation steps were implemented in `secure_app.cpp`[cite: 2]:
1. **Deprecated Unsafe Functions:** Removed the use of unsafe C-style string handling functions like `strcpy()`.
2. **Modern Data Structures:** Replaced character arrays with modern `std::string` objects.
3. **Best Practice:** `std::string` automatically manages memory dynamically, entirely eliminating the risk of buffer overflows regardless of the user input length.
