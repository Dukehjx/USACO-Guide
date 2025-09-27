# Day 50 – Introduction to Range Queries

## Overview
Today we study **range queries**, a fundamental concept in competitive programming.  
Range queries ask for information about a **subarray or subrange** of data, such as sum, minimum, or maximum.

---

## Types of Range Queries
1. **Range Sum Queries** – Total sum in `[l, r]`.
2. **Range Minimum/Maximum Queries** – Smallest/largest value in `[l, r]`.
3. **Range GCD/LCM Queries** – Useful in number theory problems.

---

## Naive vs Optimized
- **Naive**: Iterate over `[l, r]` in O(n).  
- **Optimized**: Use **prefix sums, segment trees, or sparse tables** for O(1) or O(log n).  

---

## Applications
- Subarray sum problems.  
- Interval queries in scheduling.  
- Graph and grid optimizations.  

---


## Learning Goals
- Understand the concept of range queries.  
- Implement **range sum queries** with prefix sums.  
- Prepare for **Segment Trees** (Day 51).  

---

## Next Steps
Tomorrow (Day 51), we begin **Segment Trees (Part I)**.
