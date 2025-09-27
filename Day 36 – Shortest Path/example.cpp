// example.cpp
// Day 36 – BFS Shortest Path in an Unweighted Graph
// Reads an undirected graph, source s, and target t.
// Prints distances from s and reconstructs one shortest path to t (if it exists).

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;                 // n nodes (1..n), m edges
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int s, t; 
    cin >> s >> t;

    const int INF = -1;
    vector<int> dist(n + 1, INF), parent(n + 1, -1);
    queue<int> q;
    dist[s] = 0;
    q.push(s);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : g[u]) {
            if (dist[v] == INF) {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    // Output distances
    for (int i = 1; i <= n; i++) {
        cout << dist[i] << (i == n ? '\n' : ' ');
    }

    // Reconstruct one shortest path s -> t if reachable
    if (dist[t] != INF) {
        vector<int> path;
        for (int cur = t; cur != -1; cur = parent[cur]) path.push_back(cur);
        reverse(path.begin(), path.end());
        // Print path
        for (int i = 0; i < (int)path.size(); i++) {
            cout << path[i] << (i + 1 == (int)path.size() ? '\n' : ' ');
        }
    } else {
        cout << "NO PATH\n";
    }
    return 0;
}
