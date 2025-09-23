# Self-Test Problem: Count Islands (4-Directional)

**Statement:**  
You are given a grid of `H` rows and `W` columns containing characters `'.'` (water) and `'#'` (land).  
Two `'#'` cells are connected if they share an edge (4-directional connectivity).  
Count how many **islands** (connected components of `'#'`) are in the grid.

---

**Input Format:**  
```
H W
row1
row2
...
rowH
```
- `1 ≤ H, W ≤ 1000`
- Each `row` is a string of length `W` using only `'.'` and `'#'`

**Output Format:**  
```
island_count
```

---

**Sample Input:**
```
5 6
..##..
..##..
#.....
...###
...###
```

**Sample Output:**
```
3
```

**Explanation:**  
- Component 1: the `##` block at top-right (2x2).  
- Component 2: the single `#` in row 3.  
- Component 3: the `###` block at bottom-right (2x3).

---

**Notes:**  
- Use either DFS or BFS flood fill.  
- Be careful with bounds and visited cells.  
- For large `H, W`, prefer BFS or iterative DFS.
