# Self-Test Problem: Connected Components & Largest Size

**Statement:**  
You are given an **undirected** graph with `N` nodes and `M` edges.  
Find (1) the **number of connected components**, and (2) the **size of the largest component**.

---

**Input Format:**  
```
N M
u1 v1
u2 v2
...
uM vM
```
- `1 ≤ N ≤ 200000`
- `0 ≤ M ≤ 200000`
- `1 ≤ ui, vi ≤ N`

**Output Format:**  
```
components largest_size
```

---

**Sample Input 1:**
```
5 3
1 2
2 3
4 5
```
**Sample Output 1:**
```
2 3
```

**Sample Input 2:**
```
4 0
```
**Sample Output 2:**
```
4 1
```

---

**Notes & Hints:**  
- Use an **adjacency list**.  
- Prefer **iterative DFS** (stack) to avoid recursion depth issues for large `N`.  
- If performance is tight, turn on fast I/O and avoid extra copies.
