// example.cpp
// Day 35 – Cycle Detection in Graphs
// Detect cycles in UNDIRECTED (DFS parent) and DIRECTED (DFS color) graphs.
// Input format (see problem.md):
//   TYPE N M
//   M lines: u v  (0-based vertices; for undirected, edges are bidirectional)
// TYPE = 'U' (undirected) or 'D' (directed)
// Output: "CYCLE" or "ACYCLIC"

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char type;
    int n, m;
    if (!(cin >> type >> n >> m)) return 0;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        if (type == 'U') {
            adj[u].push_back(v);
            adj[v].push_back(u);
        } else { // 'D'
            adj[u].push_back(v);
        }
    }

    vector<int> vis(n, 0);

    auto hasCycleUndirected = [&]() {
        function<bool(int,int)> dfs = [&](int u, int parent) -> bool {
            vis[u] = 1;
            for (int v : adj[u]) {
                if (!vis[v]) {
                    if (dfs(v, u)) return true;
                } else if (v != parent) {
                    return true; // back-edge to non-parent
                }
            }
            return false;
        };
        for (int i = 0; i < n; i++) if (!vis[i]) if (dfs(i, -1)) return true;
        return false;
    };

    auto hasCycleDirected = [&]() {
        // 0 = unvisited, 1 = gray (in recursion), 2 = black (done)
        vector<int> color(n, 0);
        function<bool(int)> dfs = [&](int u) -> bool {
            color[u] = 1;
            for (int v : adj[u]) {
                if (color[v] == 0) {
                    if (dfs(v)) return true;
                } else if (color[v] == 1) {
                    return true; // back-edge to gray
                }
            }
            color[u] = 2;
            return false;
        };
        for (int i = 0; i < n; i++) if (color[i] == 0) if (dfs(i)) return true;
        return false;
    };

    bool cyc = false;
    if (type == 'U') {
        cyc = hasCycleUndirected();
    } else {
        cyc = hasCycleDirected();
    }
    cout << (cyc ? "CYCLE\n" : "ACYCLIC\n");
    return 0;
}
