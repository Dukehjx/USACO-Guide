// example.cpp
// Day 32 – DFS: Count connected components (iterative to avoid recursion limits).

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); // undirected
    }

    // (optional) deterministic neighbor order
    for (int u = 1; u <= n; u++) sort(g[u].begin(), g[u].end());

    vector<int> vis(n + 1, 0);
    int components = 0;
    int bestSize = 0;
    vector<int> comp_id(n + 1, 0);
    int cur_id = 0;

    for (int s = 1; s <= n; s++) if (!vis[s]) {
        components++;
        cur_id++;
        int sz = 0;
        stack<int> st;
        st.push(s);
        vis[s] = 1;
        comp_id[s] = cur_id;
        while (!st.empty()) {
            int u = st.top(); st.pop();
            sz++;
            for (int v : g[u]) if (!vis[v]) {
                vis[v] = 1;
                comp_id[v] = cur_id;
                st.push(v);
            }
        }
        bestSize = max(bestSize, sz);
    }

    cout << components << " " << bestSize << "\n";
    // Debug: print component id per node (optional)
    // for (int u = 1; u <= n; u++) cout << comp_id[u] << (u==n?'\n':' ');
    return 0;
}
