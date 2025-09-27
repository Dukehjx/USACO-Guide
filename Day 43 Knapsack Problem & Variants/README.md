# Day 43 – Knapsack Problem & Variants

> Theme: **Choose items to maximize value under constraints.**  
For USACO Silver→Gold, knapsack DP patterns appear often (packing, budgeting, time limits, energy).

## Problems We Cover
1. **0/1 Knapsack** – each item can be taken **0 or 1** time.  
2. **Unbounded Knapsack** – each item can be taken **many times**.  
3. **Bounded Knapsack** – each item can be taken up to **k** times (optional technique notes).

---

## Core Ideas (Simple English)
- We define a DP array that stores the **best value** for a given **capacity**.
- We update the DP using each item’s **weight** and **value**.
- Order of loops matters! (下降/上升 depends on variant)

### 0/1 Knapsack (一件只能拿一次)
- **State:** `dp[w] = max value with capacity w`  
- **Transition:** for each item `(weight, value)`  
  `for w from W down to weight:`  
  `dp[w] = max(dp[w], dp[w - weight] + value)`  
- **Loop direction:** **descending** capacity to avoid reusing the same item twice.
- **Time:** `O(N * W)`; **Space:** `O(W)` with 1D optimization.

### Unbounded Knapsack (可重复拿)
- **State/Transition:**  
  `for w from weight to W:`  
  `dp[w] = max(dp[w], dp[w - weight] + value)`  
- **Loop direction:** **ascending** capacity so the same item can be used again.

### Bounded Knapsack (最多拿k次) – two common tricks
- **Binary splitting:** split `k` into sums of powers of two → convert to several 0/1 items.  
- **Monotonic queue DP:** optimize when `W` is large (advanced; Gold-level).

---



## Learning Goals
- Recognize **which knapsack variant** a problem uses.
- Write **1D optimized DP** for 0/1 and unbounded.
- Understand **loop directions** and **why** they prevent/allow reuse.
- (Optional) Learn **binary-splitting** for bounded knapsack.

---

## Common Pitfalls
- Wrong loop direction → using an item multiple times in 0/1 case.  
- Integer overflow when values are big → use `long long`.  
- Initializing `dp` incorrectly (e.g., `-INF` vs `0` depending on problem statement).

---

## Next
Tomorrow (Day 44) we apply DP to **subarray** problems (Kadane-like, partitions).
