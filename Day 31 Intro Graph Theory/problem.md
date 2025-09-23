# Self-Test Problem: Count Connected Components (Undirected)

**Statement:**  
Given an **undirected** graph with `n` vertices and `m` edges, compute the number of **connected components**.

---

**Input Format:**  
```
n m
u1 v1
u2 v2
...
um vm
```
- `1 ≤ n ≤ 200000`, `0 ≤ m ≤ 200000`
- Vertices are **0-based** (0..n-1). If your inputs are 1-based, convert them.

**Output Format:**  
```
components
```

---

**Sample Input:**
```
6 3
0 1
2 3
4 5
```

**Sample Output:**
```
3
```

---

**Notes & Hints:**  
- Use an **adjacency list** to avoid O(n²) memory.  
- Either **DFS (recursive or stack)** or **BFS** works.  
- If using recursive DFS in C++, consider increasing stack size or switching to an iterative approach for large `n`.
