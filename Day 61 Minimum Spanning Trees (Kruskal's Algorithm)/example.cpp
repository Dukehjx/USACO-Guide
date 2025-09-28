#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;
};

struct DSU {
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n+1);
        rank.assign(n+1, 0);
        for (int i = 0; i <= n; i++) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        if (rank[a] < rank[b]) swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++;
        return true;
    }
};

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;
    vector<Edge> edges(m);
    cout << "Enter edges (u v w):" << endl;
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.w < b.w;
    });

    DSU dsu(n);
    long long mstWeight = 0;
    vector<Edge> mstEdges;

    for (auto &e : edges) {
        if (dsu.unite(e.u, e.v)) {
            mstWeight += e.w;
            mstEdges.push_back(e);
        }
    }

    cout << "MST total weight = " << mstWeight << "\n";
    cout << "Edges in MST:\n";
    for (auto &e : mstEdges) {
        cout << e.u << " - " << e.v << " (" << e.w << ")\n";
    }
    return 0;
}
