# Problem: Fenwick Tree – Range Sum Queries

## Description
You are given an array of `n` integers and must process `q` queries:  
1. Update element at index `i` by adding `x`.  
2. Query the sum of a range `[l, r]`.  

---

## Input
- First line: two integers `n` and `q` (1 ≤ n, q ≤ 200000).  
- Second line: `n` integers (the array).  
- Next `q` lines:  
  - `1 l r` → query sum of [l, r]  
  - `2 i x` → add x to index i  

## Output
For each type 1 query, print the result.

---

## Example

### Input
```
5 4
1 2 3 4 5
1 1 3
2 2 2
1 2 4
1 1 5
```

### Output
```
6
11
17
```

---

## Explanation
- Query [1,3] = 1+2+3 = 6  
- Update index 2 by +2 → array = [1,4,3,4,5]  
- Query [2,4] = 4+3+4 = 11  
- Query [1,5] = 1+4+3+4+5 = 17  
