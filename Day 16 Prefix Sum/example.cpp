// Prefix sum for fast range sum queries

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n), prefix(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) prefix[i] = prefix[i-1] + arr[i];

    while (q--) {
        int l, r; // 0-based indices
        cin >> l >> r;
        int sum = prefix[r] - (l > 0 ? prefix[l-1] : 0);
        cout << sum << endl;
    }
    return 0;
}