# Day 23 – Mock Contest Problems (Bronze)

## Problem A — Paint the Fence (Simulation)

You are given M painting operations on a 1D fence. Each paints [L, R).  
Output the total painted length and the number of painted segments.

### Input
```
M
L1 R1
...
LM RM
```

### Output
```
total_length segments
```

### Example
Input
```
4
1 4
7 10
3 5
5 7
```
Output
```
9 1
```

---

## Problem B — Interval Selection (Greedy)

Given N intervals [start, end], choose the maximum number of non-overlapping intervals.

### Input
```
N
s1 e1
...
sN eN
```

### Output
```
max_count
```

### Example
Input
```
4
1 3
2 5
4 7
6 9
```
Output
```
2
```

---

## Problem C — Range Sum Queries (Prefix Sums)

Given an array and Q queries, each query gives L, R. Output sum of arr[L..R].

### Input
```
N Q
a1 ... aN
L1 R1
...
LQ RQ
```

### Output
Each query's sum.

### Example
Input
```
5 3
1 3 2 5 4
0 2
1 3
2 4
```
Output
```
6
10
11
```
