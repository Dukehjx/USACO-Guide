# Self-Test Problem: Range Sum Queries

**Statement:**  
Given an array of N integers, answer Q queries.  
Each query asks for the sum of values between indices L and R (inclusive, 0-based).

---

**Input Format:**  
First line: two integers N and Q (1 ≤ N, Q ≤ 100)  
Second line: N integers  
Next Q lines: two integers L and R (0 ≤ L ≤ R < N)

**Output Format:**  
Q lines: each with the sum for that query

---

**Sample Input:**
```
5 3
1 3 2 5 4
0 2
1 3
2 4
```

**Sample Output:**
```
6
10
11
```