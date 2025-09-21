# Self-Test Problem: Distinct Numbers

**Statement:**  
You are given an array of N integers (N ≤ 100000).  
Print the number of **distinct values** in the array.

---

**Input Format:**  
First line: integer N  
Second line: N integers

**Output Format:**  
One integer: the number of distinct values

---

**Sample Input:**
```
7
4 2 5 2 3 5 1
```

**Sample Output:**
```
5
```

**Explanation:** Distinct values are {1,2,3,4,5}, so answer is 5.

---

**Hint:**  
- Bronze brute force = O(N^2) → too slow for N=100000  
- Silver approach = sort + unique, or use a set (O(N log N))
