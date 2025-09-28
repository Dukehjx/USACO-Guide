# Day 52 – Segment Trees Part II (Lazy Propagation)

## Overview
Yesterday we learned how to build a **Segment Tree** for range queries.  
Today we extend this by learning about **Lazy Propagation**, which makes range updates efficient.

---

## Problem with Normal Segment Tree
- Single element updates are O(log n).  
- Range updates (e.g., add value to `[l, r]`) may take O(n log n).  
- Too slow for large inputs.

---

## Lazy Propagation
Idea: **Delay updates until necessary.**
- Maintain a `lazy[]` array that stores pending updates.  
- When visiting a node, push the update to children only when needed.  
- This allows **range updates in O(log n)**.

---

## Example Use Cases
- Add a value to all elements in `[l, r]`.  
- Set values in `[l, r]` to a constant.  
- Range increment + query sum/min/max.

---

## Visualization
Think of the segment tree nodes carrying “post-it notes” with delayed updates, applied only when required.

![Segment Tree Lazy Placeholder](../assets/day52_lazy_segment_tree.png)

---

## Learning Goals
- Understand why **lazy propagation** is needed.  
- Implement range updates with lazy propagation.  
- Optimize queries for large constraints.

---

## Next Steps
Tomorrow (Day 53), we will practice **Segment Tree Problems**.
