# Problem: Range Updates with Lazy Segment Tree

## Description
You are given an array of `n` integers and must process `q` queries of two types:
1. Add `x` to all elements in range `[l, r]`  
2. Query the sum of elements in range `[l, r]`

---

## Input
- First line: two integers `n` and `q` (1 ≤ n, q ≤ 200000).  
- Second line: `n` integers (initial array).  
- Next `q` lines:  
  - `1 l r x` → add x to [l, r]  
  - `2 l r` → query sum of [l, r]

## Output
For each type 2 query, output the result.

---

## Example

### Input
```
5 4
1 2 3 4 5
2 0 4
1 1 3 2
2 1 3
2 0 2
```

### Output
```
15
13
8
```

---

## Explanation
- Initial sum of [0,4] = 15  
- Update [1,3] by +2 → array = [1,4,5,6,5]  
- Query [1,3] = 4+5+6 = 15  
- Query [0,2] = 1+4+5 = 10  
