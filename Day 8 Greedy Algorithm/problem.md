# Self-Test Problem: Select Maximum Non-Overlapping Intervals

**Statement:**  
Given N intervals on a number line, find the largest number of intervals you can select so that no two overlap.

---

**Input Format:**  
First line: integer N (1 ≤ N ≤ 100)  
Next N lines: two integers per line, `start end` for each interval (start < end)

**Output Format:**  
Single integer: the maximum number of non-overlapping intervals

---

**Sample Input:**
```
4
1 3
2 5
4 7
6 9
```

**Sample Output:**
```
2
```
*Explanation: Pick [1,3] and [4,7], or [2,5] and [6,9], but not more.*