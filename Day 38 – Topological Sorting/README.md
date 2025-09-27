# Day 38 – Topological Sorting

Today you’ll learn **topological sorting** for **Directed Acyclic Graphs (DAGs)**—a Silver/Gold staple used to order tasks with dependencies.

---

## 📌 What You'll Learn

- What a **topological order** is and when it exists
- Two standard algorithms:
  - **Kahn’s algorithm (BFS on indegrees)**
  - **DFS finishing-time order**
- How to **detect cycles** (when no topo order exists)
- Complexity analysis and common pitfalls

---

## 🧠 Definition

A **topological order** of a directed graph is a permutation of vertices such that **every directed edge (u → v)** has **u before v** in the order.  
A topo order exists **iff** the graph is a **DAG** (no directed cycles).

---

## ⚙️ Kahn’s Algorithm (BFS)

1. Compute **indegree** of each node.  
2. Push every node with **indegree = 0** into a queue.  
3. Repeatedly pop from the queue, append to the order, and **decrease indegree** of its outgoing neighbors.  
4. If a neighbor’s indegree becomes 0, push it.  
5. If you processed **all N nodes**, you have a topo order; otherwise, the graph has a **cycle**.

**Time:** O(N + M)  
**Good for:** Also detecting cycles naturally via “processed count”.

---

## ⚙️ DFS Topo Sort

1. DFS over all nodes; when you **finish** exploring a node, **push** it to a stack (or vector).  
2. Reverse the stack to get a topo order.  
3. Use a **color/visited state** to detect cycles (visiting → visited).

**Time:** O(N + M)  
**Good for:** Easy to write; must be careful with recursion limits.

---

## 🧪 Cycle Detection

- **Kahn:** If processed count < N at the end → cycle exists.  
- **DFS:** If you see an edge to a **currently visiting** node → cycle exists.

---

## 🧰 Applications

- Course scheduling / task ordering with prerequisites  
- DP on DAGs (longest path in DAG, counting paths)  
- Build systems (compile order), resolving dependencies

---

## 📝 Tips

- Graph may be **disconnected**—start from all sources (indegree 0) or loop over all nodes in DFS.  
- Multiple valid topo orders can exist.  
- Mind **1-indexed vs 0-indexed** nodes in input.

---

## 💡 Example

See [`example.cpp`](./example.cpp) for both **Kahn’s** and **DFS** implementations with cycle detection.

---

## 🏋️‍♂️ Self-Test Problem

Try the classic **Course Schedule**-style task in [`problem.md`](./problem.md).  
Print any valid topological order, or `IMPOSSIBLE` if there is a cycle.
