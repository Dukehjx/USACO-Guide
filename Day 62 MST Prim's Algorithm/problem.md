# Problem: Minimum Spanning Tree (Prim’s Algorithm)

## Description
You are given a weighted undirected graph with `n` nodes and `m` edges.  
Find the total weight of the **Minimum Spanning Tree** using **Prim’s Algorithm**.

---

## Input
- First line: two integers `n` and `m` (1 ≤ n ≤ 200000, 1 ≤ m ≤ 200000).  
- Next `m` lines: three integers `u v w` (edge between u and v with weight w, 1 ≤ w ≤ 10^9).  

## Output
Print the total weight of the MST. If the graph is not connected, output `-1`.

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
6
```

---

## Explanation
The MST uses edges:  
- (2-3 with weight 1)  
- (3-4 with weight 2)  
- (1-2 with weight 3)  
Total = 6.
