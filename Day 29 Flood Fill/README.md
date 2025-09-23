# Day 29 – Flood Fill Algorithm

Today you’ll learn the classic **Flood Fill** algorithm, used to explore/mark connected regions in a grid.  
Flood fill is the foundation for many **grid** and **graph** problems in USACO Silver, like counting “islands,” measuring component sizes, and validating regions.

---

## 📌 What You'll Learn

- What flood fill is and when to use it
- Implementing flood fill with **DFS** and **BFS**
- 4-directional vs. 8-directional connectivity
- Common pitfalls (bounds, revisits, recursion depth)

---

## 🧠 What is Flood Fill?

Given a grid (like a map or picture), **flood fill** starts from a cell and explores all **adjacent** cells that meet a condition (same color/character, or passable).  
You **mark** visited cells to avoid revisiting.

---

## ➕ Adjacency

- **4-neighbors (Manhattan):** up, down, left, right
- **8-neighbors (Including diagonals):** the above + 4 diagonals

Choose based on the problem statement.

---

## 🔁 Implementations

### DFS (recursive)
- Simple, but watch out for recursion depth on very large grids.

### BFS (queue)
- Iterative and safe for large instances.

This repo’s example shows **both**.

---

## 📝 Tips

- Always check **bounds** and **visited** before exploring neighbors.
- If cells must match a certain value (e.g., `'#'`), read it once and compare consistently.
- For very large grids, prefer **BFS** or **iterative DFS** to avoid stack overflow.

---

## 💡 Example

See [`example.cpp`](./example.cpp) for counting connected components of `'#'` using both DFS and BFS.

---

## 🏋️‍♂️ Self-Test Problem

Try the problem in [`problem.md`](./problem.md): **count the number of “islands”** in a grid using 4-directional connectivity.
