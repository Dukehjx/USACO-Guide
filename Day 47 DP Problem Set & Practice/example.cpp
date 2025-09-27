#include <bits/stdc++.h>
using namespace std;

// Example DP Problem: 0/1 Knapsack
// Given weights and values of n items, put them in a knapsack of capacity W 
// to get the maximum total value.

int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            dp[i][w] = dp[i-1][w]; // don't take item i
            if (wt[i-1] <= w) {
                dp[i][w] = max(dp[i][w], dp[i-1][w - wt[i-1]] + val[i-1]);
            }
        }
    }
    return dp[n][W];
}

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;
    vector<int> wt(n), val(n);
    cout << "Enter weights: ";
    for (int i = 0; i < n; i++) cin >> wt[i];
    cout << "Enter values: ";
    for (int i = 0; i < n; i++) cin >> val[i];
    cout << "Enter knapsack capacity: ";
    cin >> W;

    cout << "Maximum value = " << knapsack(W, wt, val, n) << endl;
    return 0;
}
