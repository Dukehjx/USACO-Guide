# Day 54 – Binary Indexed Trees (Fenwick Trees)

## Overview
Today we study the **Fenwick Tree** (also called Binary Indexed Tree, BIT).  
It is a data structure that efficiently supports:
- **Prefix sums**  
- **Range updates and queries** (with modifications)  

---

## Why Fenwick Tree?
- Prefix sum queries with **O(log n)**.  
- Point updates in **O(log n)**.  
- Uses less memory and is easier to implement than Segment Trees.  

---

## Structure
- BIT is stored in an array `bit[]` of size `n+1`.  
- Each index `i` is responsible for a range of values determined by the **last set bit of i**.

---

## Operations
1. **Update** (add value to element at index `i`):  
   ```cpp
   for (int x = i; x <= n; x += x & -x) bit[x] += val;
   ```
2. **Query** (prefix sum up to index `i`):  
   ```cpp
   for (int x = i; x > 0; x -= x & -x) sum += bit[x];
   ```

---



## Learning Goals
- Understand how a Fenwick Tree works.  
- Implement prefix sum queries with BIT.  
- Use BIT for competitive programming problems.

---

## Next Steps
Tomorrow (Day 55), we will solve **BIT Problems & Applications**.
