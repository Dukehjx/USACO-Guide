# Problem: Weighted Graph Representation

## Description
You are given a weighted undirected graph with `n` nodes and `m` edges.  
Build the adjacency list representation of the graph and print it.

---

## Input
- First line: two integers `n` and `m` (1 ≤ n ≤ 200000, 1 ≤ m ≤ 200000).  
- Next `m` lines: three integers `u v w` representing an edge from `u` to `v` with weight `w`.

## Output
Print the adjacency list of the graph. Each line `i` should contain all edges `(v, w)` where `v` is a neighbor of `i`.

---

## Example

### Input
```
4 4
1 2 3
1 3 5
2 4 7
3 4 2
```

### Output
```
1: (2, 3) (3, 5)
2: (1, 3) (4, 7)
3: (1, 5) (4, 2)
4: (2, 7) (3, 2)
```

---

## Explanation
We store neighbors of each node with their corresponding weights.
