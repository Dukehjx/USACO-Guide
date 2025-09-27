# Day 46 – 2D Dynamic Programming (Table DP)

## Overview
Today we study **2D Dynamic Programming**—problems where the state depends on two indices (e.g., positions in two strings, grid coordinates, etc.).
Typical examples:
- **LCS (Longest Common Subsequence)** between two strings.
- **Edit Distance (Levenshtein distance)** for converting one string to another.
- **Grid problems** with richer transitions (already warmed up on Day 41).

---

## Core Ideas
1. **State definition**  
   Choose a table `dp[i][j]` that meaningfully captures a subproblem on prefixes/areas:
   - LCS: `dp[i][j]` = length of LCS of `s[0..i-1]` and `t[0..j-1]`.
   - Edit Distance: `dp[i][j]` = min operations to convert `s[0..i-1]` → `t[0..j-1]`.

2. **Base cases**  
   - LCS: `dp[0][*] = dp[*][0] = 0` (empty string has LCS length 0).  
   - Edit Distance: `dp[i][0] = i`, `dp[0][j] = j` (delete or insert all chars).

3. **Transitions**  
   - LCS:  
     - If `s[i-1] == t[j-1]`: `dp[i][j] = dp[i-1][j-1] + 1`  
     - Else: `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`
   - Edit Distance:  
     - If `s[i-1] == t[j-1]`: `dp[i][j] = dp[i-1][j-1]`  
     - Else: `dp[i][j] = 1 + min( replace(dp[i-1][j-1]), delete(dp[i-1][j]), insert(dp[i][j-1]) )`

4. **Order of filling**  
   Usually increasing `i` and `j` (row by row, left to right) because each state depends on top/left/diagonal neighbors.

5. **Space optimization (rolling array)**  
   If a state only depends on the previous row/column, compress to `O(min(n,m))` memory.

---


## Learning Goals
- Translate problem statements into **2D states** and **transitions**.
- Implement **LCS** and **Edit Distance** with clear base cases and loops.
- Understand **reconstruction** (how to recover an example optimal solution).

---

## Tips for USACO
- Validate **bounds** when indexing `i-1`, `j-1`.
- Prefer `vector` over large stack arrays for safety.
- For large inputs, consider **rolling arrays** or **bitsets** (advanced).

---

## Next Steps
Tomorrow (Day 47) is **DP Problem Set & Practice**—we apply many DP patterns you’ve learned so far.
