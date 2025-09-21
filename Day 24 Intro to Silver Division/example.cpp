// example.cpp
// Day 24 – Introduction to Silver Division
// Example: Check if a number exists in a large array using binary search

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    while (q--) {
        int x; cin >> x;
        bool found = binary_search(arr.begin(), arr.end(), x);
        cout << (found ? "YES" : "NO") << "\n";
    }
    return 0;
}
