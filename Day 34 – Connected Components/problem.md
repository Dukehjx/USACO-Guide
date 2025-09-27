# Self-Test Problem: Count Connected Components & Sizes

**Statement:**  
Given an **undirected** graph with `N` vertices and `M` edges, find the number of **connected components**.  
Also output the size (number of vertices) of each component in **ascending order**.

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
- Vertices are labeled `1..N`
- Graph may be disconnected

**Output Format:**  
- First line: a single integer — the number of connected components `K`  
- Second line: `K` integers — the component sizes in **ascending** order

---

**Sample Input:**
```
6 3
1 2
2 3
5 6
```

**Sample Output:**
```
3
1 2 3
```

**Explanation:**  
Components are `{1,2,3}`, `{4}`, `{5,6}` → sizes are `3,1,2` → sorted: `1 2 3`.

---

**Hints:**
- Use **DFS** or **BFS** with an adjacency list; complexity should be `O(N + M)`.
- Store each component’s size, then sort sizes before printing.
- Be careful with 1-indexed input: convert to 0-indexed or handle directly.
