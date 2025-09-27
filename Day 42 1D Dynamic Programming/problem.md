# Problem: Coin Change (Minimum Coins)

## Description
You are given `n` types of coins with positive integer values `c1, c2, ..., cn` (unlimited supply of each).  
Find the **minimum number of coins** needed to make the exact sum `S`.  
If it is **impossible**, output `-1`.

This is a classic **1D DP** task.

---

## Input
- First line: two integers `n` and `S` (1 ≤ n ≤ 100, 1 ≤ S ≤ 100000).  
- Second line: `n` integers `c1 c2 ... cn` (1 ≤ ci ≤ 10000).

## Output
- One integer: the minimum number of coins to make sum `S`, or `-1` if impossible.

---

## Constraints & Hints
- Use `dp[x] =` min number of coins for sum `x`.  
- Initialize `dp[0] = 0`, others to a large value (INF).  
- For each coin `c`, update `dp[x] = min(dp[x], dp[x - c] + 1)` for `x = c..S`.  
- Time complexity about `O(n * S)`.  
- Use `int` is fine, but `long long` also OK for safety.

---

## Sample 1

### Input
```
3 11
1 5 7
```

### Output
```
3
```

### Explanation
One optimal solution is `5 + 5 + 1` (3 coins). Other solutions may exist.

---

## Sample 2

### Input
```
2 9
2 4
```

### Output
```
-1
```

### Explanation
All sums are even; 9 cannot be formed.
