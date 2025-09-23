// example.cpp
// Day 25 – Two-Pointer Technique
// Example: Longest subarray with sum <= K

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, K;
    cin >> n >> K;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int L = 0;
    long long sum = 0;
    int best = 0;
    for (int R = 0; R < n; R++) {
        sum += a[R];
        while (sum > K) {
            sum -= a[L];
            L++;
        }
        best = max(best, R - L + 1);
    }
    cout << best << "\n";
    return 0;
}
