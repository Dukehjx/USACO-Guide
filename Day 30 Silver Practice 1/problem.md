# Day 30 – Practice Set

Solve **both** problems.

---

## Problem A — Longest Subarray with Sum ≤ K (Two-Pointer)

**Statement.**  
You are given an array of **N** positive integers and an integer **K**.  
Find the **maximum length** of a contiguous subarray whose sum is **at most K**.

**Input.**
```
N K
a1 a2 ... aN
```
- 1 ≤ N ≤ 200000, 1 ≤ ai ≤ 10^9, 1 ≤ K ≤ 10^14

**Output.**  
A single integer: the maximum length.

**Sample**
```
Input
7 8
2 1 3 2 4 3 1

Output
3
```

**Hint.** Maintain a window sum and move the left pointer only when sum > K.

---

## Problem B — Count Subsets with Target Sum (Recursion)

**Statement.**  
Given an array of **N** integers (can be positive/zero/negative) and a **target** value **T**,  
count how many subsets have **sum exactly T**.

**Input.**
```
N T
a1 a2 ... aN
```
- 1 ≤ N ≤ 20, |ai| ≤ 10^9, |T| ≤ 10^12

**Output.**  
A single integer: the number of subsets with sum = T.

**Sample**
```
Input
4 3
1 2 3 -1

Output
3
```
*Explanation:* Subsets summing to 3 are: {1,2}, {3}, {1,3,-1}.

**Hint.** Use recursion/backtracking; try both choices (take/skip) per element.
