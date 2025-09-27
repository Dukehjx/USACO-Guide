// example.cpp
// Day 34 – Connected Components (Undirected Graph)
// Count the number of connected components and print each component's size.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> g(N);
    for (int i = 0; i < M; i++) {
        int u, v; 
        cin >> u >> v;
        // assume 1..N input; convert to 0..N-1
        --u; --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> vis(N, 0);
    vector<int> comp_sizes;

    for (int s = 0; s < N; s++) {
        if (vis[s]) continue;
        // start a new component from s
        int sz = 0;
        stack<int> st;
        st.push(s);
        vis[s] = 1;
        while (!st.empty()) {
            int u = st.top(); st.pop();
            sz++;
            for (int w : g[u]) if (!vis[w]) {
                vis[w] = 1;
                st.push(w);
            }
        }
        comp_sizes.push_back(sz);
    }

    cout << comp_sizes.size() << "\n";
    for (int x : comp_sizes) cout << x << " ";
    cout << "\n";
    return 0;
}
