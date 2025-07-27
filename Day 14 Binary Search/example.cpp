// Standard binary search and STL lower_bound/upper_bound

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Returns index of x if found, -1 otherwise
int binarySearch(vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Must sort first!
    sort(arr.begin(), arr.end());

    // Standard binary search
    int idx = binarySearch(arr, x);
    if (idx != -1) cout << "Found at index " << idx << endl;
    else cout << "Not found" << endl;

    // STL lower_bound & upper_bound
    auto it = lower_bound(arr.begin(), arr.end(), x);
    if (it != arr.end())
        cout << "lower_bound index: " << (it - arr.begin()) << endl;
    else
        cout << "lower_bound not found" << endl;

    it = upper_bound(arr.begin(), arr.end(), x);
    if (it != arr.end())
        cout << "upper_bound index: " << (it - arr.begin()) << endl;
    else
        cout << "upper_bound not found" << endl;

    return 0;
}
