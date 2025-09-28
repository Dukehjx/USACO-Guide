#include <bits/stdc++.h>
using namespace std;

// Example: Representing a Weighted Graph using Adjacency List

struct Edge {
    int to, weight;
};

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;
    vector<vector<Edge>> graph(n+1);

    cout << "Enter edges (u v w):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w}); // if undirected
    }

    cout << "Graph representation (Adjacency List):\n";
    for (int u = 1; u <= n; u++) {
        cout << u << ": ";
        for (auto &e : graph[u]) {
            cout << "(" << e.to << ", " << e.weight << ") ";
        }
        cout << "\n";
    }
    return 0;
}
