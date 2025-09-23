// example.cpp
// Day 31 – Intro to Graph Theory: adjacency list, degrees, connected components (DFS)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;                 // vertices 0..n-1 (or convert from 1-based)
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        // If input is 1-based, uncomment the next two lines:
        // --u; 
        // --v;
        g[u].push_back(v);
        g[v].push_back(u);         // omit this for directed graphs
    }

    // Compute degree of each node
    vector<int> deg(n);
    for (int u = 0; u < n; u++) deg[u] = (int)g[u].size();

    // Print degrees (for debugging/learning)
    for (int u = 0; u < n; u++) {
        cout << "deg[" << u << "]=" << deg[u] << (u + 1 == n ? '\n' : ' ');
    }

    // Count connected components with DFS
    vector<int> visited(n, 0);
    function<void(int)> dfs = [&](int u) {
        visited[u] = 1;
        for (int v : g[u]) if (!visited[v]) dfs(v);
    };

    int components = 0;
    for (int u = 0; u < n; u++) if (!visited[u]) {
        components++;
        dfs(u);
    }

    cout << "components=" << components << "\n";
    return 0;
}
