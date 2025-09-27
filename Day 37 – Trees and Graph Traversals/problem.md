# Self-Test Problem: Tree Traversals & Subtree Sizes

**Statement:**  
You are given an undirected tree with `N` nodes (numbered `1..N`) and `N-1` edges.  
Root the tree at node `1`. Perform a DFS to produce:

1. The **preorder** of nodes (space-separated)
2. The **postorder** of nodes (space-separated)
3. The **subtree size** of every node `1..N` (space-separated)

Children of each node should be visited in **increasing node-id order**.

---

**Input Format:**  
```
N
u1 v1
u2 v2
...
u_{N-1} v_{N-1}
```

**Output Format:**  
```
<preorder>
<postorder>
<subtree_sizes for nodes 1..N>
```

---

**Sample Input:**  
```
5
1 2
1 3
3 4
3 5
```

**Sample Output (one valid ordering):**  
```
1 2 3 4 5
2 4 5 3 1
5 1 3 2 1
```

**Explanation:**  
- Preorder visits a node before its children (rooted at 1 with children visited by increasing IDs).  
- Postorder visits all children before the node.  
- `subtree_size[u]` = number of nodes in the subtree rooted at `u` (including `u`).

---

**Notes & Hints:**  
- Use adjacency lists and sort each list to ensure deterministic traversal order.  
- Track `parent[u]` to avoid going back during DFS.  
- Build `subtree_size[u]` in postorder: `1 + sum(subtree_size[child])`.
