// example.cpp
// Day 37 – Trees and Graph Traversals
// Reads a tree, roots it at 1, outputs preorder, postorder, and subtree sizes.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    // Sort to get deterministic traversals (helpful for testing/solutions)
    for (int i = 1; i <= n; i++) sort(g[i].begin(), g[i].end());

    vector<int> parent(n + 1, -1), depth(n + 1, 0), subSize(n + 1, 0);
    vector<int> preorder, postorder;
    preorder.reserve(n);
    postorder.reserve(n);

    // DFS (recursive). For very deep trees, consider iterative or add -Wl,--stack or tail recursion.
    function<void(int,int)> dfs = [&](int u, int p) {
        parent[u] = p;
        subSize[u] = 1;
        preorder.push_back(u);
        for (int v : g[u]) if (v != p) {
            depth[v] = depth[u] + 1;
            dfs(v, u);
            subSize[u] += subSize[v];
        }
        postorder.push_back(u);
    };

    dfs(1, 0);

    // Output preorder
    for (int i = 0; i < (int)preorder.size(); i++) {
        if (i) cout << ' ';
        cout << preorder[i];
    }
    cout << "\n";

    // Output postorder
    for (int i = 0; i < (int)postorder.size(); i++) {
        if (i) cout << ' ';
        cout << postorder[i];
    }
    cout << "\n";

    // Output subtree sizes for 1..n
    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << ' ';
        cout << subSize[i];
    }
    cout << "\n";

    // (Optional) BFS level order (commented out)
    // vector<int> level(n + 1, -1);
    // queue<int> q; q.push(1); level[1] = 0;
    // while (!q.empty()) {
    //     int u = q.front(); q.pop();
    //     for (int v : g[u]) if (v != parent[u] && level[v] == -1) {
    //         level[v] = level[u] + 1;
    //         q.push(v);
    //     }
    // }

    return 0;
}
