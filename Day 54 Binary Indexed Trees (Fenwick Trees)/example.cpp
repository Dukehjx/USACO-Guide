#include <bits/stdc++.h>
using namespace std;

struct FenwickTree {
    int n;
    vector<long long> bit;
    FenwickTree(int n) {
        this->n = n;
        bit.assign(n+1, 0);
    }
    void update(int idx, long long val) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }
    long long query(int idx) {
        long long sum = 0;
        for (; idx > 0; idx -= idx & -idx)
            sum += bit[idx];
        return sum;
    }
    long long rangeQuery(int l, int r) {
        return query(r) - query(l-1);
    }
};

int main() {
    int n, q;
    cout << "Enter array size and number of queries: ";
    cin >> n >> q;
    FenwickTree ft(n);
    vector<int> arr(n+1);
    cout << "Enter array elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        ft.update(i, arr[i]);
    }

    cout << "Enter queries (type l r or type idx val):" << endl;
    cout << "Type 1 = range sum query, Type 2 = point update" << endl;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int l, r; cin >> l >> r;
            cout << "Sum[" << l << "," << r << "] = " << ft.rangeQuery(l, r) << endl;
        } else {
            int idx, val; cin >> idx >> val;
            ft.update(idx, val);
        }
    }
    return 0;
}
