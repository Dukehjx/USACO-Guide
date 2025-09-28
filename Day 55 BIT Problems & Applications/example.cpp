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

// Count inversions using BIT
long long countInversions(vector<int>& arr) {
    int n = arr.size();
    vector<int> comp = arr;
    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());

    auto getRank = [&](int x) {
        return (int)(lower_bound(comp.begin(), comp.end(), x) - comp.begin() + 1);
    };

    FenwickTree ft(comp.size());
    long long inv = 0;
    for (int i = n-1; i >= 0; i--) {
        int r = getRank(arr[i]);
        inv += ft.query(r-1);
        ft.update(r, 1);
    }
    return inv;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Number of inversions = " << countInversions(arr) << endl;
    return 0;
}
