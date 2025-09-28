#include <bits/stdc++.h>
using namespace std;

struct SegmentTree {
    int n;
    vector<long long> tree, lazy;

    SegmentTree(int size) {
        n = size;
        tree.assign(4*n, 0);
        lazy.assign(4*n, 0);
    }

    void build(vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            build(arr, 2*node, start, mid);
            build(arr, 2*node+1, mid+1, end);
            tree[node] = tree[2*node] + tree[2*node+1];
        }
    }

    void pushDown(int node, int start, int end) {
        if (lazy[node] != 0) {
            tree[node] += (end - start + 1) * lazy[node];
            if (start != end) {
                lazy[2*node] += lazy[node];
                lazy[2*node+1] += lazy[node];
            }
            lazy[node] = 0;
        }
    }

    void updateRange(int node, int start, int end, int l, int r, int val) {
        pushDown(node, start, end);
        if (start > r || end < l) return;
        if (l <= start && end <= r) {
            lazy[node] += val;
            pushDown(node, start, end);
            return;
        }
        int mid = (start + end) / 2;
        updateRange(2*node, start, mid, l, r, val);
        updateRange(2*node+1, mid+1, end, l, r, val);
        tree[node] = tree[2*node] + tree[2*node+1];
    }

    long long queryRange(int node, int start, int end, int l, int r) {
        pushDown(node, start, end);
        if (start > r || end < l) return 0;
        if (l <= start && end <= r) return tree[node];
        int mid = (start + end) / 2;
        return queryRange(2*node, start, mid, l, r) + queryRange(2*node+1, mid+1, end, l, r);
    }
};

int main() {
    int n, q;
    cout << "Enter array size and number of queries: ";
    cin >> n >> q;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    SegmentTree st(n);
    st.build(arr, 1, 0, n-1);

    cout << "Enter queries (type l r [val]):" << endl;
    cout << "Type 1 = update range, Type 2 = query range" << endl;
    while (q--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            int val; cin >> val;
            st.updateRange(1, 0, n-1, l, r, val);
        } else {
            cout << "Query result = " << st.queryRange(1, 0, n-1, l, r) << endl;
        }
    }
    return 0;
}
