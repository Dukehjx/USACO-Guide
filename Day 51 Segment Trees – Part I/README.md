# Day 51 – Segment Trees (Part I): Introduction & Implementation

> Audience: Chinese high school students preparing for **USACO Silver → Gold**.  
> Language: English with simple explanations.

---

## 1) What is a Segment Tree?
A **Segment Tree** is a binary tree built over an array to answer **range queries** and perform **point updates** efficiently.

- Each node represents a **segment** (interval) `[L, R]` of the array.
- The root covers the whole array; children split the interval: `[L, mid]` and `[mid+1, R]`.
- The node stores an **aggregate** (e.g., sum, min, max).

**Why use it?**  
- Range query in `O(log N)` instead of `O(N)`.
- Point update in `O(log N)`.

> Today: range **sum** + point **assign** update.  
> Tomorrow (Day 52): **lazy propagation** for range updates.

---

## 2) Core Ideas (easy English)
- **Build**: recursively compute node value from children. `build(O(N))`
- **Query**: if the node segment is fully inside the query range, return the stored value; if outside, return neutral value (for sum = 0); otherwise, **split** to children. `O(log N)`
- **Update** (point): go down to the leaf of index `i`, change it, and **pull** up to refresh ancestors. `O(log N)`

---

## 3) Data Choices
- Implementation style: **recursive** (clear for learning).  
- Array indexing: **0-indexed** input, but tree nodes are numbered from `1` as usual.  
- Type: `long long` to avoid overflow with big sums.

---



## 5) Complexity
- Build: `O(N)`  
- Query: `O(log N)`  
- Point update: `O(log N)`  
- Memory: about `4 * N` for the tree array.

---

## 6) Common Pitfalls
- Wrong neutral value (for sum use **0**, for min use **+INF**).  
- Mixing 0-indexed array with 1-indexed tree segments.  
- Forgetting to **pull** (recompute parent) after an update.

---

## 7) Practice
Try the self-test in **`problem.md`**. Use the reference code in **`example.cpp`**.
