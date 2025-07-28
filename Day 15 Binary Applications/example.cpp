// Binary search: Find the minimum largest sum when splitting an array into K groups

#include <iostream>
#include <vector>
using namespace std;

// Can we split arr into <= k groups with max group sum <= limit?
bool canSplit(vector<int>& arr, int k, int limit) {
    int groups = 1, sum = 0;
    for (int x : arr) {
        if (x > limit) return false; // can't fit this number
        if (sum + x > limit) {
            groups++;
            sum = x;
        } else {
            sum += x;
        }
    }
    return groups <= k;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, right = 0;
    for (int x : arr) right += x; // total sum as upper bound
    int answer = right;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (canSplit(arr, k, mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << answer << endl;
    return 0;
}