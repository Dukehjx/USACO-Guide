# Self-Test Problem: Mode with Tie-Break

**Statement:**  
You are given `N` integers (values can be large and repeated).  
Output the **mode** (the value that appears most often) and its **frequency**.  
If multiple values tie for most frequent, output the **smallest value** among them.

---

**Input Format:**  
- First line: integer `N` (1 ≤ N ≤ 200000)  
- Second line: `N` integers `a[i]` (|a[i]| ≤ 10^9)

**Output Format:**  
- Two values separated by a space: `mode frequency`

---

**Sample Input 1:**
```
7
5 1 5 2 2 5 2
```

**Sample Output 1:**
```
2 3
```

*Explanation:* Both 2 and 5 appear 3 times; tie-break chooses the smaller value 2.

---

**Sample Input 2:**
```
5
-1 -1 3 3 3
```

**Sample Output 2:**
```
3 3
```
---

**Hints:**
- Use `unordered_map<long long,int>` to count frequencies efficiently.
- Track the current best (value, count) and apply the tie-break (`smaller value wins`).
- Watch for large `N`: your solution should be close to **O(N)** time on average.