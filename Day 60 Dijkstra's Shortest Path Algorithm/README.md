# Day 60 – Dijkstra's Shortest Path Algorithm

## Overview
Today we study **Dijkstra’s Algorithm**, one of the most important algorithms in competitive programming for finding shortest paths in weighted graphs.

---

## Key Points
- Works for **non-negative edge weights** only.  
- Uses a **priority queue (min-heap)** to always expand the closest node.  
- Time complexity: **O((n + m) log n)** with adjacency list and priority queue.

---

## Algorithm Steps
1. Initialize distances: `dist[source] = 0`, others = infinity.  
2. Use a min-heap to process the nearest unvisited node.  
3. Relax edges: if `dist[u] + w < dist[v]`, update `dist[v]`.  
4. Continue until all nodes are processed.

---



## Learning Goals
- Understand **when to use Dijkstra**.  
- Implement Dijkstra using **priority queues**.  
- Handle graphs with up to 200,000 nodes/edges efficiently.

---

## Next Steps
Tomorrow (Day 61), we will study **Minimum Spanning Trees (Kruskal’s Algorithm)**.
