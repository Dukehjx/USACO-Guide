#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to, weight;
};

long long prim(int n, vector<vector<Edge>>& graph) {
    vector<bool> inMST(n+1, false);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0, 1}); // start from node 1
    long long total = 0;
    int count = 0;

    while (!pq.empty() && count < n) {
        auto [w, u] = pq.top();
        pq.pop();
        if (inMST[u]) continue;
        inMST[u] = true;
        total += w;
        count++;
        for (auto &e : graph[u]) {
            if (!inMST[e.to]) {
                pq.push({e.weight, e.to});
            }
        }
    }
    return (count == n ? total : -1); // return -1 if graph not connected
}

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
        graph[v].push_back({u, w});
    }
    long long mstWeight = prim(n, graph);
    if (mstWeight == -1) cout << "Graph is not connected, MST not possible\n";
    else cout << "MST total weight = " << mstWeight << "\n";
    return 0;
}
