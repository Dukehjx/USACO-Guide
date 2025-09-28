# Problem: Count Inversions using BIT

## Description
An inversion in an array is a pair `(i, j)` such that `i < j` and `a[i] > a[j]`.  
Your task is to count the number of inversions in the array using a Binary Indexed Tree.

---

## Input
- First line: integer `n` (1 ≤ n ≤ 200000).  
- Second line: `n` integers `a1, a2, ..., an` (|ai| ≤ 10^9).

## Output
One integer: the number of inversions.

---

## Example

### Input
```
5
2 3 8 6 1
```

### Output
```
5
```

---

## Explanation
The inversions are:  
- (2,1), (3,1), (8,6), (8,1), (6,1).  
Total = 5.
