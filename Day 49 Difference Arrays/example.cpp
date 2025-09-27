#include <bits/stdc++.h>
using namespace std;

// Build difference array from original array
vector<int> buildDiff(vector<int>& arr) {
    int n = arr.size();
    vector<int> diff(n+1, 0);
    diff[0] = arr[0];
    for (int i = 1; i < n; i++) {
        diff[i] = arr[i] - arr[i-1];
    }
    return diff;
}

// Apply range update [l, r] += x
void updateRange(vector<int>& diff, int l, int r, int x) {
    diff[l] += x;
    if (r+1 < diff.size()) diff[r+1] -= x;
}

// Reconstruct original array from diff
vector<int> reconstruct(vector<int>& diff) {
    int n = diff.size();
    vector<int> arr(n, 0);
    arr[0] = diff[0];
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i-1] + diff[i];
    }
    return arr;
}

int main() {
    vector<int> arr = {2, 2, 2, 2, 2};
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    // Build difference array
    vector<int> diff = buildDiff(arr);

    // Perform updates
    updateRange(diff, 1, 3, 2); // add 2 to [1..3]
    updateRange(diff, 2, 4, 3); // add 3 to [2..4]

    // Reconstruct
    vector<int> updated = reconstruct(diff);
    cout << "Updated array: ";
    for (int x : updated) cout << x << " ";
    cout << endl;

    return 0;
}
