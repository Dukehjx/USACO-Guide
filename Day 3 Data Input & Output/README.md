# Day 3 – Basic Input/Output (I/O) and File Handling

Today you will practice reading input and writing output, which is essential for every USACO problem.  \
You’ll learn both standard I/O and file I/O methods, and see how to handle sample input and output in C++. \
If you want use the files downloaded from [USACO's official Website](https://www.USACO.org) for practice, then you need to know the file input and output methods.

---

## 📌 What You'll Learn

- How to read from standard input and write to standard output (cin, cout)
- How to read from a file and write to a file (ifstream, ofstream)
- Common input/output patterns in USACO
- Sample I/O problems

---

## 🖥️ Standard Input/Output

For "online" USACO problems (and most competitive programming platforms):

```cpp
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;         // Read two integers from standard input
    cout << x + y << endl; // Print their sum to standard output
    return 0;
}
```

## 📂 File Input/Output
For USACO "local" contests (where input comes from files):

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.in");
    ofstream fout("output.out");
    int x, y;
    fin >> x >> y;          // Read from input file
    fout << x + y << endl;  // Write to output file
    fin.close();
    fout.close();
    return 0;
}
```
🚩 Switching Between File I/O and Standard I/O
A handy trick for local testing:

```cpp
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
```
Add this at the start of main() to easily switch I/O modes.
When submitting to USACO, just use standard input/output!

## 📝 Tips
Always check the sample input/output format carefully.

For file I/O, the file names in your code must exactly match those given in the problem.

For standard I/O, never use file streams.

## 💡 Example
See [example.cpp](./example.cpp) for a program that reads three numbers from standard input and prints their sum.