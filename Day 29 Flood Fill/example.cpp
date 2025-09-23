// example.cpp
// Flood Fill: count connected components of '#' cells in a grid.
// Shows both DFS (recursive) and BFS (iterative).

#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<string> G;
vector<vector<int>> vis;

// 4-directional moves
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool inb(int r, int c) {
    return (0 <= r && r < H && 0 <= c && c < W);
}

// ---------- DFS (recursive) ----------
void dfs(int r, int c, char target) {
    vis[r][c] = 1;
    for (int k = 0; k < 4; k++) {
        int nr = r + dy[k], nc = c + dx[k];
        if (!inb(nr, nc)) continue;
        if (vis[nr][nc]) continue;
        if (G[nr][nc] != target) continue;
        dfs(nr, nc, target);
    }
}

// ---------- BFS (iterative) ----------
void bfs(int sr, int sc, char target) {
    queue<pair<int,int>> q;
    q.push({sr, sc});
    vis[sr][sc] = 1;
    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        for (int k = 0; k < 4; k++) {
            int nr = r + dy[k], nc = c + dx[k];
            if (!inb(nr, nc)) continue;
            if (vis[nr][nc]) continue;
            if (G[nr][nc] != target) continue;
            vis[nr][nc] = 1;
            q.push({nr, nc});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> H >> W;
    G.resize(H);
    for (int i = 0; i < H; i++) cin >> G[i];
    vis.assign(H, vector<int>(W, 0));

    int components = 0;
    for (int r = 0; r < H; r++) {
        for (int c = 0; c < W; c++) {
            if (!vis[r][c] && G[r][c] == '#') {
                components++;
                // Choose either dfs(r,c,'#') or bfs(r,c,'#');
                // dfs(r, c, '#');
                bfs(r, c, '#');
            }
        }
    }
    cout << components << "\n";
    return 0;
}
