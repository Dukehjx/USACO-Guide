# Day 42 – 1D Dynamic Programming

> Theme: **Define `dp[i]` precisely, set base cases, write the transition, pick the correct loop order, and (optionally) compress memory to 1D.**

This day focuses on **1D DP** problems where the state can be represented by a single index `i` (or value `x`).  
These appear **very often** in USACO Silver/Gold.

---

## Core Patterns

### 1) Define the state
- Example (Coin Change – minimum coins): `dp[x] = the minimum number of coins to make sum x` (or `INF` if impossible).
- Example (House Robber): `dp[i] = max money from first i houses`.

### 2) Base cases
- Coin Change (min): `dp[0] = 0`.
- House Robber: `dp[0] = 0` (no house), `dp[1] = value[1]`.

### 3) Transition
- Coin Change (min): `dp[x] = min(dp[x], dp[x - coin] + 1)` for each coin if `x - coin >= 0`.
- House Robber: `dp[i] = max(dp[i-1], dp[i-2] + a[i])`.

### 4) Iteration Order
- **Unbounded items (can reuse an item many times)** → outer loop: items, inner loop: value **increasing**.
- **0/1 choice (use at most once)** → outer loop: items, inner loop: value **decreasing**.

### 5) Memory compression
- When `dp[i]` depends only on prior states (like `i-1` or `i-2`), keep only a few variables.

---

## Worked Examples (high level)

1. **Coin Change – Minimum Coins**
   - State: `dp[x]` min coins.
   - Base: `dp[0] = 0`, others `INF`.
   - Transition: for each coin `c`, for `x` from `c`..`target`, `dp[x] = min(dp[x], dp[x-c] + 1)`.
   - If `dp[target]` is still `INF`, there is **no solution**.

2. **House Robber (No Adjacent)**
   - State: `dp[i]` max money from first `i` houses.
   - Base: `dp[0] = 0`, `dp[1] = a[1]`.
   - Transition: `dp[i] = max(dp[i-1], dp[i-2] + a[i])`.

3. **Maximum Subarray Sum (Kadane)**
   - `best_end_here = max(a[i], best_end_here + a[i])`
   - `best = max(best, best_end_here)`.

---


## Learning Goals
- Recognize when a problem reduces to **1D state**.
- Choose correct **loop order** (increasing vs decreasing).
- Implement at least **two** classic 1D DP problems.

---

## Tips for Chinese learners
- Keep comments near each line of code.  
- Draw a tiny table by hand for small inputs to verify transitions.  
- Watch for **integer overflow**; use `long long` when sums can be large.

---

## Next Steps
Day 43: **Knapsack & variants** (0/1, Complete/Unbounded, Bounded).