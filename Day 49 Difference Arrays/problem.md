# Problem: Range Update Queries

## Description
You are given an array of size `n` initialized with zeros.  
You need to perform `q` range update operations.  
Each update adds `x` to all elements in the range `[l, r]`.  
After all updates, output the final array.

---

## Input
- First line: two integers `n` and `q` (1 ≤ n ≤ 100000, 1 ≤ q ≤ 100000).  
- Next `q` lines: three integers `l, r, x`.  

## Output
Print the final array of size `n`.

---

## Example

### Input
```
5 3
1 3 2
2 4 3
0 2 1
```

### Output
```
3 6 7 5 0
```

---

## Explanation
- After first update: [2,2,2,0,0]  
- After second update: [2,5,5,3,0]  
- After third update: [3,6,6,3,0]  
Final result = [3,6,7,5,0]
