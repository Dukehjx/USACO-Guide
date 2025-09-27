# Self-Test Problem: Cycle Detection (Directed or Undirected)

**Statement:**  
You are given a graph that is either **undirected** or **directed**.  
Determine whether the graph contains **any cycle**.

---

**Input Format:**  
First line: `TYPE N M`  
- `TYPE` is a single character: `U` for **undirected**, `D` for **directed**  
- `N` = number of vertices (0-based), `M` = number of edges  
Next `M` lines: two integers `u v` describing an edge

**Output Format:**  
Print a single line:  
- `CYCLE` if the graph contains at least one cycle  
- `ACYCLIC` otherwise

---

**Constraints:**  
- `1 ≤ N ≤ 2 * 10^5`  
- `0 ≤ M ≤ 2 * 10^5`  
- Graph may be disconnected (multiple components)  
- Self-loops and multi-edges may appear

---

**Sample 1 (Undirected, cycle):**
```
U 4 4
0 1
1 2
2 0
2 3
```
**Output:**
```
CYCLE
```

**Sample 2 (Directed, acyclic):**
```
D 4 3
0 1
1 2
2 3
```
**Output:**
```
ACYCLIC
```

**Hints:**  
- For **U**, use DFS with **parent** tracking (or Union–Find).  
- For **D**, use DFS with a **recursion stack / color** array.  
- Remember to start DFS from **every unvisited** node.
