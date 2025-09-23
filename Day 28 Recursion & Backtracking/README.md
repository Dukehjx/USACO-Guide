# Day 28 – Recursion & Backtracking

Today you’ll practice **backtracking**—a powerful way to explore possibilities with recursion while **pruning** paths that can’t lead to a valid answer.  
Backtracking appears everywhere in USACO: generating subsets/permutations, arranging objects with rules, searching grids, etc.

---

## 📌 What You'll Learn

- Backtracking vs. plain recursion
- The standard **backtracking template**
- How to **prune** and **restore state**
- Classic patterns: subsets, permutations, N-Queens, paths on a grid

---

## 🧠 Core Idea

Backtracking = **DFS over the solution space**. At each step, try a choice, recurse, then **undo** (backtrack) the choice to try the next one.

**Template (pseudocode):**
```
def dfs(state):
    if state is complete:
        record answer
        return
    for each choice c available from state:
        if c is invalid: continue       # pruning
        apply(c)                        # make choice
        dfs(updated state)              # recurse
        undo(c)                         # backtrack
```

Key points:
- **Prune early** (skip choices that can’t work).
- **Order choices** (sorting can help de-duplicate or prune).
- **Restore state** exactly—push/pop, mark/unmark.

---

## 🧪 Typical Uses

- **Generate all combinations/subsets/permutations**
- **Constraint satisfaction** (e.g., N-Queens, Sudoku-lite)
- **Paths in a grid** with visited marks
- **Meet-in-the-middle** combinations (advanced)

---

## 📝 Pruning Examples

- Stop when **partial sum > target**
- Skip duplicate values: if `nums[i] == nums[i-1]` and `i-1` unused, continue
- Use heuristics (order by most constrained first)

---

## 💡 Example

See [`example.cpp`](./example.cpp) for a compact, fast **N-Queens counter** using backtracking with bitmasks (up to N ≤ 14 on a fast machine; reduce N if TLE).
It demonstrates:
- Choice enumeration (column for each row)
- Conflict checks (columns/diagonals)
- Recursion + backtrack
- Efficient pruning with bitmasks

---

## 🏋️‍♂️ Self-Test Problem

Try the challenge in [`problem.md`](./problem.md): **Unique Permutations** for an array with duplicates, printed in lexicographic order.
Implement classic backtracking with sorting + duplicate-skip.
