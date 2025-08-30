// example.cpp
// Day 23: Mini contest runner (choose Problem A/B/C).
// Replace solveA/solveB/solveC with your implementations during the contest.

#include <bits/stdc++.h>
using namespace std;

static void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solveA() {
    int M; 
    cin >> M;
    const int MAXX = 2005;
    vector<int> paint(MAXX, 0);
    for (int i = 0; i < M; i++) {
        int L, R; cin >> L >> R; 
        if (L > R) swap(L, R);
        for (int x = L; x < R; x++) paint[x] = 1;
    }
    int total = 0, segments = 0;
    for (int x = 0; x + 1 < MAXX; x++) total += paint[x];
    for (int x = 0; x + 1 < MAXX; x++) {
        if (paint[x] && (x == 0 || !paint[x-1])) segments++;
    }
    cout << total << " " << segments << "\n";
}

void solveB() {
    int N; 
    cin >> N;
    vector<pair<int,int>> seg(N);
    for (int i = 0; i < N; i++) cin >> seg[i].first >> seg[i].second;
    sort(seg.begin(), seg.end(), [](auto &a, auto &b){
        if (a.second != b.second) return a.second < b.second;
        return a.first < b.first;
    });
    int cnt = 0, last_end = INT_MIN;
    for (auto &p : seg) {
        if (p.first >= last_end) {
            cnt++;
            last_end = p.second;
        }
    }
    cout << cnt << "\n";
}

void solveC() {
    int N, Q; 
    cin >> N >> Q;
    vector<long long> a(N), pref(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    pref[0] = a[0];
    for (int i = 1; i < N; i++) pref[i] = pref[i-1] + a[i];
    while (Q--) {
        int L, R; 
        cin >> L >> R;
        long long ans = pref[R] - (L ? pref[L-1] : 0LL);
        cout << ans << "\n";
    }
}

int main(int argc, char** argv) {
    fastio();
    char code;
    if (argc >= 2) code = argv[1][0];
    else if (!(cin >> code)) return 0;
    if (code == 'A' || code == 'a') solveA();
    else if (code == 'B' || code == 'b') solveB();
    else if (code == 'C' || code == 'c') solveC();
    return 0;
}
