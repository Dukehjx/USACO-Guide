#include <bits/stdc++.h>
using namespace std;

// ----------------- Fibonacci DP -----------------
const int MAXN = 1000;
long long memo[MAXN];

// Top-down with memoization
long long fibMemo(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fibMemo(n-1) + fibMemo(n-2);
}

// Bottom-up with tabulation
long long fibTab(int n) {
    vector<long long> dp(n+1, 0);
    dp[0] = 0;
    if (n >= 1) dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// ----------------- Grid Paths DP -----------------
long long gridPaths(int n, vector<vector<int>>& blocked) {
    vector<vector<long long>> dp(n+1, vector<long long>(n+1, 0));
    dp[1][1] = 1; // starting point

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (blocked[i][j]) {
                dp[i][j] = 0;
                continue;
            }
            if (i > 1) dp[i][j] += dp[i-1][j];
            if (j > 1) dp[i][j] += dp[i][j-1];
        }
    }
    return dp[n][n];
}

int main() {
    memset(memo, -1, sizeof(memo));

    // Fibonacci demo
    int n;
    cout << "Enter n for Fibonacci: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") with memoization = " << fibMemo(n) << endl;
    cout << "Fibonacci(" << n << ") with tabulation = " << fibTab(n) << endl;

    // Grid paths demo
    int gridSize;
    cout << "Enter grid size: ";
    cin >> gridSize;

    vector<vector<int>> blocked(gridSize+1, vector<int>(gridSize+1, 0));
    cout << "Enter number of blocked cells: ";
    int b; cin >> b;
    cout << "Enter blocked cells as (row col):" << endl;
    for (int i = 0; i < b; i++) {
        int r, c;
        cin >> r >> c;
        blocked[r][c] = 1;
    }

    cout << "Number of paths in " << gridSize << "x" << gridSize << " grid = "
         << gridPaths(gridSize, blocked) << endl;
    return 0;
}
