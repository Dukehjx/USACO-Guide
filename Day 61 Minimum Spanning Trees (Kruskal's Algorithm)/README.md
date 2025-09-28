# Day 61 – Minimum Spanning Trees (Kruskal's Algorithm)

## Overview
Today we study **Minimum Spanning Trees (MSTs)** using **Kruskal’s Algorithm**.  
An MST connects all nodes of a weighted graph with the **minimum total edge weight**, without cycles.

---

## Kruskal’s Algorithm
1. Sort all edges by weight.  
2. Initialize a **Disjoint Set Union (DSU)** structure.  
3. Iterate over edges in sorted order:  
   - If the edge connects two different components, add it to the MST.  
   - Otherwise, skip it (to avoid cycles).  
4. Continue until all nodes are connected.

---

## Complexity
- Sorting edges: **O(m log m)**  
- DSU operations: **O(m α(n))** (almost constant time)  
- Total: **O(m log m)**  

---

## Applications
- Network design (minimizing cost of connections).  
- Clustering in machine learning.  
- Road / power grid optimization.  

---


## Learning Goals
- Understand MST and Kruskal’s Algorithm.  
- Implement DSU (Union-Find).  
- Solve graph optimization problems using MST.  

---

## Next Steps
Tomorrow (Day 62), we will study **Prim’s Algorithm** for MSTs.
