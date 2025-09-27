# Problem: Range Sum Queries

## Description
You are given an array of `n` integers and `q` queries.  
Each query asks for the **sum of elements from index l to r** (0-indexed).

---

## Input
- First line: two integers `n` and `q` (1 ≤ n, q ≤ 200000).  
- Second line: `n` integers `a1, a2, ..., an` (|ai| ≤ 10^9).  
- Next `q` lines: two integers `l` and `r` (0 ≤ l ≤ r < n).

## Output
Print the answer for each query on a new line.

---

## Example

### Input
```
5 3
1 2 3 4 5
0 2
1 3
2 4
```

### Output
```
6
9
12
```

---

## Explanation
- Query 1: sum of [1,2,3] = 6  
- Query 2: sum of [2,3,4] = 9  
- Query 3: sum of [3,4,5] = 12  
