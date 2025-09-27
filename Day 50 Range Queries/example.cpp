#include <bits/stdc++.h>
using namespace std;

// Range Sum Query using Prefix Sums
class RangeSumQuery {
    vector<long long> prefix;
public:
    RangeSumQuery(vector<int>& arr) {
        int n = arr.size();
        prefix.resize(n+1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i-1] + arr[i-1];
        }
    }
    long long query(int l, int r) { // sum from l..r (0-indexed)
        return prefix[r+1] - prefix[l];
    }
};

int main() {
    int n, q;
    cout << "Enter array size and number of queries: ";
    cin >> n >> q;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    RangeSumQuery rsq(arr);

    cout << "Enter queries (l r):" << endl;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << "Sum[" << l << "," << r << "] = " << rsq.query(l, r) << endl;
    }
    return 0;
}
