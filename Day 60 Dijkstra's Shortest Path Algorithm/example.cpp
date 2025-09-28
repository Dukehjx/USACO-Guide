#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to, weight;
};

vector<long long> dijkstra(int n, int src, vector<vector<Edge>>& graph) {
    const long long INF = 1e18;
    vector<long long> dist(n+1, INF);
    dist[src] = 0;

    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d != dist[u]) continue; // skip outdated entry
        for (auto &e : graph[u]) {
            if (dist[u] + e.weight < dist[e.to]) {
                dist[e.to] = dist[u] + e.weight;
                pq.push({dist[e.to], e.to});
            }
        }
    }
    return dist;
}

int main() {
    int n, m, src;
    cout << "Enter number of nodes, edges, and source: ";
    cin >> n >> m >> src;
    vector<vector<Edge>> graph(n+1);
    cout << "Enter edges (u v w):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w}); // undirected
    }

    auto dist = dijkstra(n, src, graph);
    cout << "Shortest distances from source " << src << ":\n";
    for (int i = 1; i <= n; i++) {
        if (dist[i] == 1e18) cout << "INF ";
        else cout << dist[i] << " ";
    }
    cout << "\n";
    return 0;
}
