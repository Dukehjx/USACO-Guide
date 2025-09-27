# Self-Test Problem: Shortest Path in a Grid (BFS)

**Statement:**  
You are given an `N x M` grid with:
- `S` = start
- `T` = target
- `.` = free cell
- `#` = wall (blocked)

You can move **up, down, left, right** (no diagonals).  
Find the **minimum number of steps** from `S` to `T`, or output `-1` if unreachable.

---

**Input Format:**  
```
N M
grid row 1
grid row 2
...
grid row N
```
- `1 ≤ N, M ≤ 1000`

**Output Format:**  
A single integer: the minimum number of steps (edges) from `S` to `T`, or `-1`.

---

**Sample Input:**
```
5 6
S..#..
.#.#..
..#...
##.#..
...#.T
```

**Sample Output:**
```
9
```

**Hints:**
- Use BFS over cells.  
- Keep `dist[r][c] = -1` initially, set start to `0`.  
- Transition to neighbors if inside grid, not a wall, and unvisited.  
- Optional: store `parent` to reconstruct an actual path.
