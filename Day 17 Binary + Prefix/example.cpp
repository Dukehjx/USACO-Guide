// Find the smallest index where the prefix sum exceeds X (binary search + prefix sum)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n), prefix(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) prefix[i] = prefix[i-1] + arr[i];

    // Binary search for minimal index where prefix sum > x
    int left = 0, right = n-1, answer = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (prefix[mid] > x) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << answer << endl;
    return 0;
}
