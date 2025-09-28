# Problem: Dijkstra’s Shortest Path

## Description
You are given a weighted undirected graph with `n` nodes and `m` edges.  
Find the shortest distance from a source node `s` to all other nodes using **Dijkstra’s Algorithm**.

---

## Input
- First line: three integers `n`, `m`, `s` (1 ≤ n, m ≤ 200000).  
- Next `m` lines: three integers `u v w` (edge between u and v with weight w, 1 ≤ w ≤ 10^9).  

## Output
Print `n` integers: the shortest distance from `s` to each node. If unreachable, print `INF`.

---

## Example

### Input
```
5 6 1
1 2 2
1 3 4
2 3 1
2 4 7
3 5 3
4 5 1
```

### Output
```
0 2 3 7 6
```

---

## Explanation
- Distance(1,2) = 2  
- Distance(1,3) = 3 via node 2  
- Distance(1,5) = 6 via 3  
- Distance(1,4) = 7 via 2 or 5
