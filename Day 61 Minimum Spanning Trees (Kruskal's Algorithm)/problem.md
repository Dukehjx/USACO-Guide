# Problem: Minimum Spanning Tree (Kruskal’s Algorithm)

## Description
You are given a weighted undirected graph with `n` nodes and `m` edges.  
Find the **minimum spanning tree (MST)** total weight using **Kruskal’s Algorithm**.

---

## Input
- First line: two integers `n` and `m` (1 ≤ n ≤ 200000, 1 ≤ m ≤ 200000).  
- Next `m` lines: three integers `u v w` representing an edge (1 ≤ u,v ≤ n, 1 ≤ w ≤ 10^9).  

## Output
Print the total weight of the MST.

---

## Example

### Input
```
4 5
1 2 3
1 3 5
2 3 1
2 4 4
3 4 2
```

### Output
```
7
```

---

## Explanation
The MST uses edges (2-3 with weight 1), (3-4 with weight 2), and (1-2 with weight 3).  
Total = 1 + 2 + 3 = 6.
