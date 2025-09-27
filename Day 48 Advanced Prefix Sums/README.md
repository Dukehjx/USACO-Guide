# Day 48 – Introduction to Prefix Sums (Advanced)

## Overview
Today we go beyond simple prefix sums and explore **advanced applications and optimizations**.  
Prefix sums allow fast range queries, but we can extend them to handle **2D grids, range updates, and modular conditions**.

---

## Applications and Optimizations

### 1. 1D Prefix Sums (Review)
- `prefix[i] = a[1] + a[2] + ... + a[i]`
- Range sum `[l, r] = prefix[r] - prefix[l-1]`

### 2. 2D Prefix Sums
For a grid `a[i][j]`,  
`prefix[i][j] = sum of rectangle (1,1) to (i,j)`  
Query rectangle `(x1, y1)` to `(x2, y2)` in O(1).

### 3. Range Updates with Difference Arrays
- Instead of updating each element in `[l, r]`, update boundary points.
- Faster when many updates, fewer queries.

### 4. Prefix Min/Max
- Similar idea but store min/max instead of sum.

### 5. Modulo Prefix Sums
- Useful for problems like: count subarrays divisible by `k`.

---


## Learning Goals
- Implement **2D prefix sums**.  
- Use **difference arrays** for fast range updates.  
- Apply **modulo prefix sums** in subarray problems.

---

## Next Steps
Tomorrow (Day 49), we will learn about **Difference Arrays** in more detail.
