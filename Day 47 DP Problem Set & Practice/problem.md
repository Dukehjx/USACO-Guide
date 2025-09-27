# Problem: Practice DP – Knapsack Problem

## Description
You are given `n` items, each with a weight and a value.  
You need to maximize the total value while keeping the total weight ≤ `W`.

---

## Input
- First line: two integers `n` (1 ≤ n ≤ 100) and `W` (1 ≤ W ≤ 1000).  
- Next `n` lines: two integers `wi` and `vi` (weight and value of item i).

## Output
One integer: the maximum total value.

---

## Example

### Input
```
4 5
2 3
1 2
3 4
2 2
```

### Output
```
7
```

---

## Explanation
- Take items 2 and 3 for value = 2 + 4 = 6  
- Or take items 1 and 4 for value = 3 + 2 = 5  
- Best is items 2 + 3 for total = 7.
