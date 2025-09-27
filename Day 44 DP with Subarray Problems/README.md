# Day 44 – DP with Subarray Problems

**Theme:** Dynamic Programming on linear arrays (subarrays).  
We will master classic patterns that appear in USACO Silver/Gold problems.

## 1) Maximum Subarray Sum (Kadane’s Algorithm)
- **State:** `bestEnd[i]` = max sum of a subarray that **ends at index i**.
- **Transition:** `bestEnd[i] = max(a[i], bestEnd[i-1] + a[i])`.
- **Answer:** `max_i bestEnd[i]`.
- **Why DP?** The optimal subarray ending at `i` either starts fresh at `i`, or extends the best ending at `i-1`.

## 2) Maximum Subarray Sum with **One Deletion**
Sometimes you may delete **at most one element** to increase the best subarray sum.
Two helpful DP arrays:
- `endHere[i]` – max sum of a subarray **ending** at `i` (no deletion).
- `startHere[i]` – max sum of a subarray **starting** at `i` (no deletion).

Then the best with one deletion is:
- Either no deletion (Kadane answer), or
- Delete `a[i]` and connect left and right: `endHere[i-1] + startHere[i+1]` (for any valid `i`).

This is `O(n)` time and `O(n)` memory (can be optimized).

## 3) Maximum **Circular** Subarray Sum (Optional Stretch)
For circular arrays, the best subarray either
- is a normal non-wrapping max (Kadane), or
- wraps around: `totalSum - (minimum subarray sum)`.
Handle edge cases when all numbers are negative.

---


## Learning Goals
- Recognize **subarray DP** state design.
- Implement Kadane’s algorithm confidently.
- Extend to **one deletion** and understand circular variant.

---

## Tips for Chinese learners
- “Subarray” = 连续子数组（必须连续）; “Prefix” = 前缀; “Suffix” = 后缀。
- 先把**状态定义**清楚，再写转移；画图很有帮助。

---

## What’s Next
Day 45: **DP with Subsequences** (e.g., LIS – Longest Increasing Subsequence).