# Problem: Subarrays Divisible by K

## Description
You are given an array of `n` integers and an integer `k`.  
Count the number of subarrays whose sum is divisible by `k`.

---

## Input
- First line: two integers `n` and `k` (1 ≤ n ≤ 100000, 1 ≤ k ≤ 1000).  
- Second line: `n` integers `a1, a2, ..., an` (-10^9 ≤ ai ≤ 10^9).

## Output
One integer: the number of subarrays divisible by `k`.

---

## Example

### Input
```
5 5
2 3 1 6 4
```

### Output
```
2
```

---

## Explanation
The subarrays are:
- `[2,3]` with sum 5.  
- `[2,3,1,6,4]` with sum 16, divisible by 5.  
