# Self-Test Problem: Minimum Largest Sum of Subarrays

**Statement:**  
Given an array of N positive integers, divide it into K consecutive groups (each group must have at least one element), such that the largest sum among the groups is minimized. Output this minimum possible largest sum.

---

**Input Format:**  
First line: two integers N and K (1 ≤ N ≤ 100, 1 ≤ K ≤ N)  
Second line: N integers (each ≥ 1)

**Output Format:**  
A single integer: the minimum possible largest group sum

---

**Sample Input:**
```
5 3
2 4 5 3 1
```

**Sample Output:**
```
5
```

*Explanation: Groups can be [2,4], [5], [3,1]. The largest sum is 6, but [2,4,5], [3], [1] gives max 11. The best you can do is [2,4], [5,3], [1] for max sum 7, but [2], [4,5], [3,1] gives max sum 6. The minimum is 5, which is the best.*
