# Problem: Activity Selection

## Description
You are given `n` intervals, each with a start and end time.  
Find the maximum number of **non-overlapping intervals** you can select.

---

## Input
- First line: integer `n` (1 ≤ n ≤ 200000).  
- Next `n` lines: two integers `si` and `ei` (start and end).  

## Output
One integer: the maximum number of non-overlapping intervals.

---

## Example

### Input
```
5
1 3
2 5
4 6
6 8
5 7
```

### Output
```
3
```

---

## Explanation
- Choose intervals [1,3], [4,6], [6,8].  
- Maximum = 3 non-overlapping intervals.
