#include <bits/stdc++.h>
using namespace std;

/*
  Day 43 Example Code – Knapsack Variants
  Audience: Chinese high school students (clear English + comments)
  Build: g++ -O2 -std=c++17 example.cpp -o example
*/

/* ---------------- 0/1 Knapsack (each item at most once) ----------------
   dp[w] = max value with capacity w
   Loop capacity from W down to weight to avoid reusing the item.
*/
long long knapsack01(int W, const vector<int>& wt, const vector<int>& val) {
    vector<long long> dp(W + 1, 0);
    int n = wt.size();
    for (int i = 0; i < n; i++) {
        for (int w = W; w >= wt[i]; w--) {
            dp[w] = max(dp[w], dp[w - wt[i]] + (long long)val[i]);
        }
    }
    return dp[W];
}

/* ---------------- Unbounded Knapsack (each item unlimited times) -------
   Loop capacity from weight up to W so item can be reused.
*/
long long knapsackUnbounded(int W, const vector<int>& wt, const vector<int>& val) {
    vector<long long> dp(W + 1, 0);
    int n = wt.size();
    for (int i = 0; i < n; i++) {
        for (int w = wt[i]; w <= W; w++) {
            dp[w] = max(dp[w], dp[w - wt[i]] + (long long)val[i]);
        }
    }
    return dp[W];
}

/* -------- Bounded Knapsack via Binary Splitting (optional/advanced) ----
   Each item i can be used up to k[i] times.
   We split k into sums of powers of two: k = 1 + 2 + 4 + ... + remainder.
   Each chunk becomes a 0/1 item with weight*chunk and value*chunk.
*/
long long knapsackBounded_BinarySplit(
    int W, const vector<int>& wt, const vector<int>& val, const vector<int>& k
) {
    vector<int> nwt, nval; // expanded items
    int n = wt.size();
    for (int i = 0; i < n; i++) {
        int cnt = k[i];
        int base = 1;
        while (cnt > 0) {
            int take = min(base, cnt);
            nwt.push_back(wt[i] * take);
            nval.push_back(val[i] * take);
            cnt -= take;
            base <<= 1;
        }
    }
    // Now solve as 0/1 knapsack with expanded items
    vector<long long> dp(W + 1, 0);
    for (size_t i = 0; i < nwt.size(); i++) {
        for (int w = W; w >= nwt[i]; w--) {
            dp[w] = max(dp[w], dp[w - nwt[i]] + (long long)nval[i]);
        }
    }
    return dp[W];
}

/* ------------------------ Demo in main() --------------------------------
   We show small examples for each variant.
   Input format (optional): You can comment this out and just run the demo.
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Demo 0/1
    {
        int W = 10;
        vector<int> wt = {6, 3, 4, 2};
        vector<int> val = {30, 14, 16, 9};
        cout << "[0/1] Max value = " << knapsack01(W, wt, val) << "\n";
        // Expected: choose items 3(4,16)+2(3,14)+4(2,9)= weight 9 value 39 OR 6(6,30)+4(2,9)=38 => 39
    }

    // Demo Unbounded
    {
        int W = 7;
        vector<int> wt = {2, 3, 4};
        vector<int> val = {5, 7, 9};
        cout << "[Unbounded] Max value = " << knapsackUnbounded(W, wt, val) << "\n";
        // For W=7, best is 2+2+3 => value 5+5+7=17
    }

    // Demo Bounded
    {
        int W = 15;
        vector<int> wt = {5, 6};
        vector<int> val = {10, 12};
        vector<int> k   = {3, 2}; // item0 up to 3, item1 up to 2
        cout << "[Bounded] Max value = " << knapsackBounded_BinarySplit(W, wt, val, k) << "\n";
    }

    return 0;
}
