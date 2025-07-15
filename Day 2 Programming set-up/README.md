# Day 2 – Setting Up Your Coding Environment

Today you'll set up your computer for USACO problem-solving.  
A good environment helps you code faster and avoid technical issues during contests.

---

## 📌 What You'll Learn

- How to set up a C++ coding environment for USACO
- Compiler, IDE, and recommended tools
- USACO input/output requirements
- Tips for smooth contest coding

---

## 🖥️ Environment Setup Steps

### 1. Install a C++ Compiler

- **Windows:**  
  [MinGW-w64](https://www.mingw-w64.org/) (Recommended) or install [WSL](https://learn.microsoft.com/en-us/windows/wsl/)
- **Mac:**  
  Install Xcode Command Line Tools:  
  ```bash
  xcode-select --install
  ```
- **Linux:**
    ```bash
    sudo apt-get update
    sudo apt-get install g++
    ```
### 2. Choose an IDE or Text Editor
- **Easy to use:**
  
  Visual Studio Code (Cross-platform, recommended)
  
  Or just use a simple editor + terminal

## 📥 USACO Input & Output

USACO problems often require reading from files and writing to files (for "local" contests), or standard input/output for "online" problems.

**Standard I/O:**  
Use `cin` and `cout`
See `example.cpp` for a template!

**File I/O:**  
Use file streams (`ifstream`, `ofstream`).  

---

## 📝 Tips for USACO Contests

- Always **test your environment** before the contest day.
- Know how to quickly input values using I/O.
- Set up templates for faster coding (see example).
- Use sample to check your setup.

---

## 💡 Example

See `example.cpp` for a basic USACO standard I/O template.

---

## 🏋️‍♂️ Self-Test Problem

Try the self-test problem in [`problem.md`](./problem.md)  
Practice reading/writing input and output!
