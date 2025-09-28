#include <bits/stdc++.h>
using namespace std;

// Example Silver-Level Problem: Longest Subarray with Sum <= K
// (Sliding Window / Two Pointers)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int left = 0;
    long long sum = 0;
    int best = 0;
    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum > k) {
            sum -= arr[left];
            left++;
        }
        best = max(best, right - left + 1);
    }

    cout << "Longest subarray length with sum <= " << k << " = " << best << "\n";
    return 0;
}
