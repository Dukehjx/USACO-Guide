// day39 example.cpp
// Graphs Review: component sizes + bipartite check (undirected)
// Build: g++ -O2 -std=gnu++17 day39_example.cpp -o run
// Run:   ./run  (provide input on stdin)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> g(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> color(N + 1, -1);  // -1 = uncolored, 0/1 = bipartite colors
    vector<int> compSize;
    bool isBip = true;

    for (int s = 1; s <= N; s++) if (color[s] == -1) {
        // start a new component
        queue<int> q;
        q.push(s);
        color[s] = 0;
        int size = 0;

        while (!q.empty()) {
            int u = q.front(); q.pop();
            size++;
            for (int v : g[u]) {
                if (color[v] == -1) {
                    color[v] = color[u] ^ 1;
                    q.push(v);
                } else if (color[v] == color[u]) {
                    isBip = false;
                }
            }
        }
        compSize.push_back(size);
    }

    sort(compSize.begin(), compSize.end());
    // Output component sizes
    for (int i = 0; i < (int)compSize.size(); i++) {
        if (i) cout << ' ';
        cout << compSize[i];
    }
    cout << "\n";

    cout << (isBip ? "BIPARTITE" : "NOT BIPARTITE") << "\n";
    return 0;
}
