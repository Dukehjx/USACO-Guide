# Day 49 – Difference Arrays

## Overview
Today we learn about **Difference Arrays**, a powerful technique for handling **range updates efficiently**.

---

## Key Idea
- Normally, updating a range `[l, r]` requires O(n) time.  
- With a difference array `diff`, we can update in O(1) time.

---

## Definition
For an array `a[1..n]`, the difference array is:
```
diff[i] = a[i] - a[i-1]
```
where `a[0] = 0`.

To update a range `[l, r]` by value `x`:
```
diff[l] += x
diff[r+1] -= x
```

Finally, reconstruct the array `a` using prefix sums of `diff`.

---

## Applications
1. **Fast Range Updates** – multiple updates, few queries.  
2. **2D Difference Arrays** – useful in grid problems.  
3. **Competitive Programming Optimization**.

---


## Learning Goals
- Understand difference arrays.  
- Implement 1D range updates with O(1).  
- Learn how to rebuild the original array.  

---

## Next Steps
Tomorrow (Day 50), we will study **Range Queries** and how difference arrays help.
