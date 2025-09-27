# Review Problem: Components & Bipartite

**Statement**  
Given an **undirected** graph with `N` vertices and `M` edges (vertices labeled `1..N`), do the following:

1. Print the **sizes of all connected components** in **increasing order** (space-separated, one line).  
2. Print `BIPARTITE` if the entire graph is bipartite; otherwise print `NOT BIPARTITE` (second line).

---

**Input Format**
```
N M
u1 v1
u2 v2
...
uM vM
```
- `1 ≤ N ≤ 2 * 10^5`  
- `0 ≤ M ≤ 2 * 10^5`  
- Multiple edges and self-loops will **not** appear.

**Output Format**
- Line 1: component sizes in increasing order, space-separated  
- Line 2: `BIPARTITE` or `NOT BIPARTITE`

---

**Sample Input**
```
7 5
1 2
2 3
4 5
5 6
6 4
```

**Sample Output**
```
1 3 3
NOT BIPARTITE
```

**Explanation**  
- Components are `{1,2,3}`, `{4,5,6}`, `{7}` → sizes `3 3 1` → print in increasing order `1 3 3`.  
- The second component has an odd cycle (4–5–6–4), so the graph is **not** bipartite.
