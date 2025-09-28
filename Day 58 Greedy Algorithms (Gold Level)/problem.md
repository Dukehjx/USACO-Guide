# Problem: Minimum Number of Platforms

## Description
You are given arrival and departure times of `n` trains.  
Find the minimum number of platforms required so that no train waits.

---

## Input
- First line: integer `n` (1 ≤ n ≤ 200000).  
- Second line: `n` integers (arrival times).  
- Third line: `n` integers (departure times).  

## Output
One integer: the minimum number of platforms needed.

---

## Example

### Input
```
6
900 940 950 1100 1500 1800
910 1200 1120 1130 1900 2000
```

### Output
```
3
```

---

## Explanation
- At time 950, trains at 900, 940, and 950 are all present.  
- Hence, 3 platforms are needed at that moment.
