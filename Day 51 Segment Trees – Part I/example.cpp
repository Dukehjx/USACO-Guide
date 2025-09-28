#include <bits/stdc++.h>
using namespace std;

/*
  Segment Tree (Part I): Range Sum + Point Assign Update
  - Array indexing: 0..n-1
  - Tree nodes: 1.. (stored in vector<long long> seg)
  - Operations:
      * build(arr)
      * point_update(idx, new_value)
      * range_query(l, r)  // inclusive
*/

struct SegTree {
    int n;
    vector<long long> seg; // 4*n is safe

    SegTree(int n = 0) { init(n); }

    void init(int n_) {
        n = n_;
        seg.assign(4 * n, 0LL);
    }

    // Build from an array
    void build(const vector<long long>& a, int id, int L, int R) {
        if (L == R) { seg[id] = a[L]; return; }
        int mid = (L + R) >> 1;
        build(a, id << 1, L, mid);
        build(a, id << 1 | 1, mid + 1, R);
        seg[id] = seg[id << 1] + seg[id << 1 | 1]; // pull
    }
    void build(const vector<long long>& a) {
        init((int)a.size());
        if (n) build(a, 1, 0, n - 1);
    }

    // Point assign: set a[idx] = val
    void update(int idx, long long val, int id, int L, int R) {
        if (L == R) { seg[id] = val; return; }
        int mid = (L + R) >> 1;
        if (idx <= mid) update(idx, val, id << 1, L, mid);
        else update(idx, val, id << 1 | 1, mid + 1, R);
        seg[id] = seg[id << 1] + seg[id << 1 | 1]; // pull
    }
    void update(int idx, long long val) {
        update(idx, val, 1, 0, n - 1);
    }

    // Range sum query on [l, r]
    long long query(int l, int r, int id, int L, int R) {
        if (r < L || R < l) return 0LL;            // disjoint -> neutral
        if (l <= L && R <= r) return seg[id];      // fully covered
        int mid = (L + R) >> 1;
        return query(l, r, id << 1, L, mid) +
               query(l, r, id << 1 | 1, mid + 1, R);
    }
    long long query(int l, int r) {
        if (l > r) return 0LL;
        return query(l, r, 1, 0, n - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    // Problem format (see problem.md):
    // n q
    // a0 a1 ... a_{n-1}
    // then q lines:
    //   1 i x   -> set a[i] = x
    //   2 l r   -> print sum on [l, r]
    if (!(cin >> n >> q)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    SegTree st;
    st.build(a);

    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int i; long long x; cin >> i >> x;
            st.update(i, x);
        } else if (type == 2) {
            int l, r; cin >> l >> r;
            cout << st.query(l, r) << "\n";
        }
    }
    return 0;
}
