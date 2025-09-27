#include <bits/stdc++.h>
using namespace std;

/*
 * Day 42 Example Code: 1D DP
 * - Coin Change (Minimum Coins) — Unbounded
 * - House Robber (No Adjacent)
 * - Maximum Subarray Sum (Kadane)
 *
 * Input format for this demo program (choose what you want to test):
 *   1) Coin Change (min)
 *      n target
 *      c1 c2 ... cn
 *   2) House Robber
 *      n
 *      a1 a2 ... an
 *   3) Maximum Subarray Sum
 *      n
 *      a1 a2 ... an
 *
 * This file shows functions with detailed comments.
 */

// ---------------------- Coin Change: Minimum Coins ----------------------
// Unbounded coins: You can use each coin unlimited times.
// dp[x] = minimum number of coins needed to make sum x (or INF if impossible).
int coinChangeMinCoins(vector<int>& coins, int target) {
    const int INF = 1e9;
    vector<int> dp(target + 1, INF);
    dp[0] = 0; // base: 0 coins to make sum 0

    // For unbounded knapsack-like transitions:
    // Outer loop: coins; Inner loop: value increasing
    for (int c : coins) {
        for (int x = c; x <= target; ++x) {
            dp[x] = min(dp[x], dp[x - c] + 1);
        }
    }
    return (dp[target] >= INF ? -1 : dp[target]);
}

// ---------------------- House Robber (No Adjacent) ----------------------
// dp[i] = max value from first i houses.
// Transition: dp[i] = max(dp[i-1], dp[i-2] + a[i])
long long houseRobber(const vector<long long>& a) {
    int n = (int)a.size();
    if (n == 0) return 0;
    if (n == 1) return a[0];

    long long prev2 = 0;     // dp[i-2]
    long long prev1 = a[0];  // dp[i-1]
    for (int i = 2; i <= n; ++i) {
        long long take = prev2 + a[i-1]; // rob i-th house (index i-1)
        long long skip = prev1;           // skip i-th house
        long long cur = max(take, skip);
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}

// ---------------------- Maximum Subarray Sum (Kadane) ----------------------
long long maxSubarraySum(const vector<long long>& a) {
    if (a.empty()) return 0;
    long long bestEndHere = a[0];
    long long best = a[0];
    for (int i = 1; i < (int)a.size(); ++i) {
        // Either start new at a[i] or extend previous subarray
        bestEndHere = max(a[i], bestEndHere + a[i]);
        best = max(best, bestEndHere);
    }
    return best;
}

// ---------------------- Simple drivers for demonstration ----------------------
void demoCoinChange() {
    int n, target;
    cin >> n >> target;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) cin >> coins[i];

    int ans = coinChangeMinCoins(coins, target);
    if (ans == -1) cout << "impossible\n";
    else cout << ans << "\n";
}

void demoHouseRobber() {
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << houseRobber(a) << "\n";
}

void demoKadane() {
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << maxSubarraySum(a) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*
     * Choose a mode by typing 1 / 2 / 3, then provide the input:
     * 1: Coin Change (min)
     * 2: House Robber
     * 3: Maximum Subarray Sum
     */
    int mode;
    if (!(cin >> mode)) return 0;
    if (mode == 1) demoCoinChange();
    else if (mode == 2) demoHouseRobber();
    else if (mode == 3) demoKadane();
    else cout << "Unknown mode\n";
    return 0;
}
