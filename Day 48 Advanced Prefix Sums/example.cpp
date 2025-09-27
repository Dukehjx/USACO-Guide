#include <bits/stdc++.h>
using namespace std;

// ----------------- 1D Prefix Sum -----------------
vector<long long> prefix1D(vector<int>& arr) {
    int n = arr.size();
    vector<long long> prefix(n+1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + arr[i-1];
    }
    return prefix;
}

// ----------------- 2D Prefix Sum -----------------
vector<vector<long long>> prefix2D(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();
    vector<vector<long long>> prefix(n+1, vector<long long>(m+1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix[i][j] = grid[i-1][j-1] 
                         + prefix[i-1][j] 
                         + prefix[i][j-1] 
                         - prefix[i-1][j-1];
        }
    }
    return prefix;
}

// Query rectangle sum using prefix2D
long long query2D(vector<vector<long long>>& prefix, int x1, int y1, int x2, int y2) {
    return prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1];
}

// ----------------- Modulo Prefix Sum -----------------
int countSubarraysDivisibleByK(vector<int>& arr, int k) {
    unordered_map<int, int> freq;
    freq[0] = 1; // base case
    int prefix = 0, count = 0;

    for (int x : arr) {
        prefix = (prefix + x % k + k) % k;
        count += freq[prefix];
        freq[prefix]++;
    }
    return count;
}

int main() {
    // Example 1D Prefix Sum
    vector<int> arr = {1, 2, 3, 4, 5};
    auto p1 = prefix1D(arr);
    cout << "Sum of [2,4] = " << p1[4] - p1[1] << endl; // 2+3+4 = 9

    // Example 2D Prefix Sum
    vector<vector<int>> grid = {{1,2,3},{4,5,6},{7,8,9}};
    auto p2 = prefix2D(grid);
    cout << "Sum of rectangle (2,2) to (3,3) = " << query2D(p2,2,2,3,3) << endl; // 5+6+8+9=28

    // Example Modulo Prefix Sum
    vector<int> arr2 = {2, 3, 1, 6, 4};
    int k = 5;
    cout << "Subarrays divisible by " << k << " = " << countSubarraysDivisibleByK(arr2,k) << endl;

    return 0;
}
