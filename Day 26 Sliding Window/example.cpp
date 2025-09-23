// example.cpp
// Day 26 – Sliding Window Technique
// 1) Fixed-size: maximum sum of subarray length K
// 2) Variable-size: minimum length subarray with sum >= S (positive integers)

#include <bits/stdc++.h>
using namespace std;

// 1) Fixed-size window: O(n)
long long maxSumFixedK(const vector<int>& a, int K) {
    int n = (int)a.size();
    if (K > n) return 0;
    long long sum = 0, best = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (i >= K) sum -= a[i - K]; // remove leftmost to keep size K
        if (i >= K - 1) best = max(best, sum);
    }
    return best;
}

// 2) Variable-size window (positive integers): O(n)
int minLenAtLeastS(const vector<int>& a, long long S) {
    int n = (int)a.size();
    int L = 0, ans = INT_MAX;
    long long sum = 0;
    for (int R = 0; R < n; R++) {
        sum += a[R];
        while (L <= R && sum >= S) {        // shrink while condition holds
            ans = min(ans, R - L + 1);
            sum -= a[L++];
        }
    }
    return (ans == INT_MAX ? -1 : ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int K; 
    cin >> K;
    cout << maxSumFixedK(a, K) << "\n";

    long long S; 
    cin >> S;
    cout << minLenAtLeastS(a, S) << "\n";

    return 0;
}
