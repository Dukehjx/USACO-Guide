# Problem: Point Update + Range Sum Query

## Description
You are given an array of `n` integers. Support two operations:

1. `1 i x` – **assign** `a[i] = x` (0-indexed).  
2. `2 l r` – output the **sum** of `a[l..r]` (inclusive).

Use a **Segment Tree** to answer queries quickly.

---

## Input
- First line: `n`, `q` (1 ≤ n, q ≤ 2e5).  
- Second line: `n` integers `a0, a1, ..., a_{n-1}` (|ai| ≤ 1e9).  
- Next `q` lines: each is one of the two operations above.

## Output
For every type `2` query, print the sum on its own line.

---

## Sample

### Input
```
5 6
1 3 -2 4 5
2 0 4
2 1 3
1 2 10
2 0 2
1 4 -1
2 3 4
```

### Output
```
11
5
14
3
```

### Explanation
- Sum[0,4] = 1 + 3 + (-2) + 4 + 5 = 11  
- Sum[1,3] = 3 + (-2) + 4 = 5  
- After `a[2] = 10`, Sum[0,2] = 1 + 3 + 10 = 14  
- After `a[4] = -1`, Sum[3,4] = 4 + (-1) = 3

---

## Hints
- For **sum**, the neutral value is `0`.  
- Tree size ~ `4 * n` is safe.  
- Be careful with 0-index vs 1-index.
