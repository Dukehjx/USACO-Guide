# Day 45 – DP with Subsequences: Longest Increasing Subsequence (LIS)

## Overview
Today we study **DP with subsequences**, focusing on the **Longest Increasing Subsequence (LIS)** problem.

---

## Problem Definition: LIS
- Given an array of `n` integers, the **LIS** is the longest subsequence where elements are strictly increasing.
- A **subsequence** does not require contiguous elements, unlike subarrays.

---

## DP Approach
1. Define `dp[i]` = length of the LIS ending at index `i`.
2. Transition:  
   `dp[i] = max(dp[j] + 1)` for all `j < i` where `arr[j] < arr[i]`.
3. Base case: `dp[i] = 1` for all `i`.
4. Answer = `max(dp[i])` over all indices.

---

## Complexity
- **O(n^2)** with simple DP.  
- Optimized LIS with **binary search** in **O(n log n)**.

---


## Learning Goals
- Understand **subsequence vs subarray**.  
- Implement LIS using **O(n^2) DP**.  
- Learn about the **O(n log n) optimized approach**.

---

## Next Steps
Tomorrow (Day 46), we will extend DP to **2D dynamic programming problems**.
