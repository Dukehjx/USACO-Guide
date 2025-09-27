# Problem: Festival Shopping (0/1 Knapsack)

## Description
You are going to a festival and can carry a bag with capacity `W`.  
There are `N` items. Each item `i` has **weight** `w_i` and **value** `v_i`.  
You can take each item **at most once**. Find the **maximum total value** you can carry.

This is the **0/1 knapsack**.

---

## Input
- First line: two integers `N` and `W` (1 ≤ N ≤ 200, 1 ≤ W ≤ 10^5).  
- Next `N` lines: two integers `w_i` and `v_i` (1 ≤ w_i ≤ W, 1 ≤ v_i ≤ 10^9).

> Hint: Use 1D DP with `long long`. Complexity ≈ O(N·W).  
> If `W` is very large in your local tests, reduce it to fit time limits.

## Output
- One integer: the maximum total value that fits into capacity `W`.

---

## Sample

### Input
```
4 10
6 30
3 14
4 16
2 9
```

### Output
```
39
```

### Explanation
Pick items with weights (3, 4, 2) → total weight 9 ≤ 10, total value 14 + 16 + 9 = 39.
