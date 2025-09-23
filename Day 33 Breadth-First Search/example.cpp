// example.cpp
// BFS on an unweighted, undirected graph: shortest distance and one shortest path

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected
    }
    int s, t;
    cin >> s >> t;

    vector<int> dist(n + 1, -1), parent(n + 1, -1);
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    if (dist[t] == -1) {
        cout << "No path\n";
        return 0;
    }
    cout << "Distance: " << dist[t] << "\n";
    vector<int> path;
    for (int cur = t; cur != -1; cur = parent[cur]) path.push_back(cur);
    reverse(path.begin(), path.end());
    for (int i = 0; i < (int)path.size(); i++) {
        if (i) cout << " ";
        cout << path[i];
    }
    cout << "\n";
    return 0;
}
