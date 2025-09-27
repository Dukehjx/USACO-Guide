# Self-Test Problem: Course Plan (Topological Order)

**Statement:**  
You are given `N` courses and `M` prerequisite relations. Each relation is a directed edge **u v** meaning *you must finish course u before course v*.  
Output **any** valid order to take all courses. If it is **impossible** (there is a cycle), print `IMPOSSIBLE`.

---

**Input Format:**  
```
N M
u1 v1
u2 v2
...
uM vM
```
- `1 ≤ N ≤ 2 * 10^5`  
- `0 ≤ M ≤ 2 * 10^5`  
- `1 ≤ ui, vi ≤ N`

**Output Format:**  
A single line with a valid topological order of all N courses (1..N), or `IMPOSSIBLE`.

---

**Sample Input 1:**
```
5 4
1 2
1 3
3 4
2 4
```
**Sample Output 1:**
```
1 3 2 4 5
```
(Another valid answer is `1 2 3 4 5`.)

---

**Sample Input 2 (Cycle):**
```
3 3
1 2
2 3
3 1
```
**Sample Output 2:**
```
IMPOSSIBLE
```

**Hints:**
- Use **Kahn’s algorithm** with an indegree queue, or **DFS** with cycle detection.
- If using Kahn, check whether you output exactly N nodes.
