# Day 30 – Silver Practice Problems (Two-Pointer, Recursion)

Practice time! Today you’ll apply **two-pointer** and **recursion** patterns on USACO-style tasks.

---

## 📌 What You’ll Do
- Solve 1 two-pointer problem (array/window).
- Solve 1 recursion problem (DFS/backtracking).
- Compare against the reference patterns in `example.cpp`.

---

## 🧭 How to Use This Day
1. Read both tasks in [`problem.md`](./problem.md).
2. Pick one to do first; set a 45–60 minute timer.
3. Implement and test locally with the provided samples.
4. After finishing both, review the reference patterns in `example.cpp`.
5. Write a short note: *What was the key invariant / base case?*

---

## 🧠 Hints
- **Two-pointer:** Maintain window invariants; only move `L` when needed.
- **Recursion:** Define a clear base case; pass minimal state; avoid global mutable state when possible.

---

## 🧪 Complexity Targets
- Two-pointer: **O(N)**.
- Recursion task here: up to **O(N·2^N)** for generating subsets (small N).

---

## 💡 Reference
`example.cpp` contains:
- `longest_at_most_k_sum` (two-pointer, positives)
- `generate_subsets_sum` (recursion/backtracking)

Good luck!
