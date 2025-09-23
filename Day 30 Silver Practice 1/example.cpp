// example.cpp
// Day 30 – Silver Practice (Two-Pointer, Recursion)
// Build: g++ -O2 -std=gnu++17 example.cpp -o day30
// Run examples:
//   Two-pointer demo:  echo "7 8\n2 1 3 2 4 3 1" | ./day30 tp
//   Recursion demo:    echo "4 5\n1 2 3 2" | ./day30 rec
//
// This file shows reference PATTERNS, not full judge solutions.

#include <bits/stdc++.h>
using namespace std;

// ---------------- Two-Pointer Pattern ----------------
// Longest subarray with sum <= K (assuming all a[i] > 0)
int longest_at_most_k_sum(const vector<int>& a, long long K) {
    int n = (int)a.size();
    int L = 0, best = 0;
    long long sum = 0;
    for (int R = 0; R < n; R++) {
        sum += a[R];
        while (sum > K && L <= R) {
            sum -= a[L];
            L++;
        }
        best = max(best, R - L + 1);
    }
    return best;
}

// ---------------- Recursion / Backtracking ----------------
// Count subsets whose sum equals target. N <= ~20 recommended for brute-force.
void dfs_subsets_sum(const vector<int>& a, int i, long long cur, long long target, long long& ways) {
    if (i == (int)a.size()) {
        if (cur == target) ways++;
        return;
    }
    // Choice: skip a[i]
    dfs_subsets_sum(a, i + 1, cur, target, ways);
    // Choice: take a[i]
    dfs_subsets_sum(a, i + 1, cur + a[i], target, ways);
}

long long generate_subsets_sum(const vector<int>& a, long long target) {
    long long ways = 0;
    dfs_subsets_sum(a, 0, 0, target, ways);
    return ways;
}

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string mode = (argc >= 2 ? string(argv[1]) : "");
    if (mode == "tp") {
        int n; long long K;
        if (!(cin >> n >> K)) return 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << longest_at_most_k_sum(a, K) << "\n";
    } else if (mode == "rec") {
        int n; long long target;
        if (!(cin >> n >> target)) return 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << generate_subsets_sum(a, target) << "\n";
    } else {
        // Print brief help if no mode provided
        // cerr << "Usage: ./day30 [tp|rec]\n";
    }
    return 0;
}
