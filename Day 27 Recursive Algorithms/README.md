# Day 27 – Recursive Algorithms (Basics)

Today you’ll learn the **core ideas of recursion**—writing a function that calls itself to solve a smaller version of the same problem.  
You’ll practice identifying **base cases**, designing **recursive transitions**, and reasoning about **time/space** (call stack) complexity.

---

## 📌 What You'll Learn
- What recursion is and when to use it
- Base case vs. recursive case
- Recursion trees and complexity
- Common pitfalls (missing base case, overlapping subproblems, stack depth)
- Safer patterns: memoization and divide & conquer

---

## 🧠 Recursion 101
A recursive function has two parts:
1. **Base case**: small input with a direct answer (stops recursion)
2. **Recursive case**: solve a smaller subproblem and combine the result

Example (factorial):
```cpp
long long fact(long long n) {
    if (n <= 1) return 1;           // base case
    return n * fact(n - 1);         // recursive case
}
```

---

## 🌳 Recursion Tree & Complexity
- Each call may spawn more calls → forms a tree of calls
- **Linear recursion** (one call): depth ≈ N → O(N) calls (e.g., factorial)
- **Binary recursion** (two calls): number of calls grows exponentially (e.g., naive Fibonacci)
- Beware of **overlapping subproblems** → fix with **memoization** (cache results)

---

## 🧰 Useful Patterns
- **Divide & Conquer** (e.g., merge sort, quick sort)
- **Binary recursion** (e.g., tree DFS)
- **Tail recursion** (can be iterative in C++)
- **Binary search (recursive or iterative)**

---

## ⚠️ Pitfalls & Tips
- Always write a clear **base case** first.
- Keep input sizes small if depth can be large (stack overflow risk).
- If repeated subproblems exist, use **memoization** or **bottom-up DP**.
- Prefer iterative solutions when recursion depth may exceed ~10⁴ in C++.

---

## 💡 Example
See [`example.cpp`](./example.cpp) for:
- `fact(n)` – linear recursion
- `fib(n)` – memoized recursion (safe for n ≤ 90)
- `fastPow(a, b)` – divide & conquer (O(log b))

---

## 🏋️‍♂️ Self-Test Problem
Open [`problem.md`](./problem.md): implement a **recursive palindrome check** on a string.
