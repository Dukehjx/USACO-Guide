# Problem: Longest Subarray with Sum ≤ K

## Description
You are given an array of `n` integers and an integer `k`.  
Find the length of the longest subarray whose sum is **at most k**.

---

## Input
- First line: two integers `n` and `k` (1 ≤ n ≤ 200000, |ai| ≤ 10^9).  
- Second line: `n` integers `a1, a2, ..., an`.

## Output
One integer: the maximum length of such a subarray.

---

## Example

### Input
```
8 10
1 2 3 4 5 1 1 1
```

### Output
```
4
```

---

## Explanation
- Subarray `[1,2,3,4]` has sum 10 and length 4.  
- No longer subarray has sum ≤ 10.  
