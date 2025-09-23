# Self-Test Problem: Longest Subarray with Sum ≤ K

**Statement:**  
You are given an array of N positive integers and an integer K.  
Find the **maximum length** of a subarray whose sum is at most K.

---

**Input Format:**  
First line: two integers N and K (1 ≤ N ≤ 100000, 1 ≤ K ≤ 10^9)  
Second line: N integers (1 ≤ a[i] ≤ 1000)

**Output Format:**  
One integer: the maximum length

---

**Sample Input:**
```
7 8
2 1 3 2 4 3 1
```

**Sample Output:**
```
3
```

**Explanation:**  
The longest subarray with sum ≤ 8 is [2,1,3] or [3,2,3], length 3.

---

**Hint:**  
- Naive approach (check all subarrays) = O(N^2) → too slow.  
- Use two pointers to maintain a sliding window in O(N).
