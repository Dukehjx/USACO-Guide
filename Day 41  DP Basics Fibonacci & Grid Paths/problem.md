# Problem: Grid Paths

## Description
You are given an `n x n` grid. You start at the top-left corner `(1,1)` and want to reach the bottom-right corner `(n,n)`.  
You can only move **right** or **down**. Some cells may be blocked.

Find the number of distinct paths modulo `1e9+7`.

---

## Input
- First line: integer `n` (2 ≤ n ≤ 1000).  
- Next `n` lines: string of length `n`, where  
  - `'.'` = free cell  
  - `'*'` = blocked cell  

## Output
One integer: the number of paths from `(1,1)` to `(n,n)`.

---

## Example

### Input
```
4
....
.*..
...*
....
```

### Output
```
3
```

---

## Explanation
- The paths must avoid blocked cells `(2,2)` and `(3,4)`.
- DP table counts paths efficiently.
