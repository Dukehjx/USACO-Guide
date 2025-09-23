# Day 25 – Two-Pointer Technique

Today you’ll learn the **two-pointer technique**, one of the most important tools for Silver-level problems.  
This technique allows you to solve array and string problems in **O(N)** instead of O(N^2).

---

## 📌 What You'll Learn

- What the two-pointer technique is
- Common use cases: sliding window, subarray sums, longest substring
- How to apply it efficiently to avoid nested loops

---

## 📝 What is the Two-Pointer Technique?

The idea:  
- Use two indices (pointers) `L` and `R` to represent a subarray or window.  
- Move one or both pointers step by step to maintain conditions (like sum ≤ X, distinct elements, etc).  
- Avoid restarting from scratch for each position.

This often reduces **O(N^2)** → **O(N)**.

---

## 🔑 Applications

1. **Sliding Window** – keep track of a sum or count within a window.  
2. **Longest Substring/Segment** – find the largest range that satisfies a condition.  
3. **Pair Searching** – e.g., check if two numbers sum to X in a sorted array.  

---

## 💡 Example

See [`example.cpp`](./example.cpp) for a two-pointer solution that finds the longest subarray with sum ≤ K.

---

## 🏋️‍♂️ Self-Test Problem

Try the self-test problem in [`problem.md`](./problem.md)!  
It will train you to maintain a sliding window with two pointers.
