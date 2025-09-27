# Day 41 – DP Basics: Fibonacci & Grid Paths

## Overview
Today we practice **basic dynamic programming (DP) problems**:  
1. **Fibonacci Numbers** – simple recurrence relation.  
2. **Grid Paths** – classic DP counting problem.

---

## Fibonacci Recurrence
- **Recursive definition:** `F(n) = F(n-1) + F(n-2)` with base cases `F(0) = 0`, `F(1) = 1`.  
- Can be solved using **memoization (top-down)** or **tabulation (bottom-up)**.

---

## Grid Paths Problem
- Given an `n x n` grid, starting at the top-left corner `(1,1)` and moving only **right** or **down**, how many ways are there to reach `(n,n)`?
- Transition relation:  
  `dp[i][j] = dp[i-1][j] + dp[i][j-1]`  
- Base case: `dp[1][1] = 1`.  
- If obstacles exist, set `dp[i][j] = 0` for blocked cells.

---


## Learning Goals
- Implement **Fibonacci** using memoization and tabulation.  
- Understand **2D DP table filling** with grid paths.  
- Practice base cases + transitions carefully.  

---

## Next Steps
Tomorrow (Day 42), we will expand into **1D Dynamic Programming problems** like coin change and house robber.
