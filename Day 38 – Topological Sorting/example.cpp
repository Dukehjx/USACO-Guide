// example.cpp
// Day 38 – Topological Sorting (Kahn's BFS + DFS)
// Build: g++ -O2 -std=gnu++17 example.cpp -o topo

#include <bits/stdc++.h>
using namespace std;

vector<int> kahn_toposort(int n, const vector<vector<int>>& g) {
    vector<int> indeg(n, 0);
    for (int u = 0; u < n; u++)
        for (int v : g[u]) indeg[v]++;

    queue<int> q;
    for (int i = 0; i < n; i++) if (indeg[i] == 0) q.push(i);

    vector<int> order;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        order.push_back(u);
        for (int v : g[u]) {
            if (--indeg[v] == 0) q.push(v);
        }
    }
    if ((int)order.size() != n) return {}; // cycle
    return order;
}

bool dfs_cycle(int u, const vector<vector<int>>& g, vector<int>& color, vector<int>& order) {
    color[u] = 1; // visiting
    for (int v : g[u]) {
        if (color[v] == 0) {
            if (dfs_cycle(v, g, color, order)) return true;
        } else if (color[v] == 1) {
            return true; // back-edge → cycle
        }
    }
    color[u] = 2; // done
    order.push_back(u);
    return false;
}

vector<int> dfs_toposort(int n, const vector<vector<int>>& g) {
    vector<int> color(n, 0), order;
    for (int i = 0; i < n; i++) if (color[i] == 0) {
        if (dfs_cycle(i, g, color, order)) return {}; // cycle detected
    }
    reverse(order.begin(), order.end());
    return order;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Input format:
    // n m
    // m lines: u v  (directed edge u->v), nodes are 1..n
    // Mode:
    // 0 -> Kahn
    // 1 -> DFS
    int n, m; 
    if (!(cin >> n >> m)) return 0;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        --u; --v;
        g[u].push_back(v);
    }
    int mode = 0;
    if (!(cin >> mode)) mode = 0;

    vector<int> order;
    if (mode == 0) order = kahn_toposort(n, g);
    else order = dfs_toposort(n, g);

    if (order.empty()) {
        cout << "IMPOSSIBLE\n";
    } else {
        for (int i = 0; i < (int)order.size(); i++) {
            cout << (order[i] + 1) << (i + 1 == (int)order.size() ? '\n' : ' ');
        }
    }
    return 0;
}
