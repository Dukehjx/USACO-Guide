#include <bits/stdc++.h>
using namespace std;

// ----------------- O(n^2) DP Solution -----------------
int LIS_DP(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 1);
    int ans = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}

// ----------------- O(n log n) Optimized Solution -----------------
int LIS_BinarySearch(vector<int>& arr) {
    vector<int> lis;
    for (int x : arr) {
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if (it == lis.end()) lis.push_back(x);
        else *it = x;
    }
    return lis.size();
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "LIS length (O(n^2) DP) = " << LIS_DP(arr) << endl;
    cout << "LIS length (O(n log n)) = " << LIS_BinarySearch(arr) << endl;
    return 0;
}
