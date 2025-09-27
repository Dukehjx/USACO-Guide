#include <bits/stdc++.h>
using namespace std;

/*
  Day 44 – DP with Subarray Problems

  Contents:
    1) Kadane: maximum subarray sum (non-empty)
    2) Max subarray sum with at most one deletion
    3) (Optional) Max circular subarray sum

  Notes for USACO students:
    - Use long long to avoid overflow when values are large (±1e9).
    - Read input fast if needed (ios::sync_with_stdio(false); cin.tie(nullptr);).
*/

long long kadane(const vector<long long>& a) {
    long long bestEnd = a[0];   // best sum ending at current position
    long long best = a[0];      // global best
    for (size_t i = 1; i < a.size(); ++i) {
        bestEnd = max(a[i], bestEnd + a[i]);
        best = max(best, bestEnd);
    }
    return best;
}

/*
  Max subarray sum with at most one deletion.
  Idea:
    - endHere[i] = best sum ending at i (no deletion)
    - startHere[i] = best sum starting at i (no deletion)
    - Answer = max( kadane(a),
                    max over i of endHere[i-1] + startHere[i+1] )
      (delete a[i] to connect left and right)
*/
long long maxSubarrayOneDeletion(const vector<long long>& a) {
    int n = (int)a.size();
    if (n == 1) return a[0]; // deleting the only element yields empty; we require non-empty subarray

    vector<long long> endHere(n), startHere(n);
    // endHere
    endHere[0] = a[0];
    for (int i = 1; i < n; ++i) {
        endHere[i] = max(a[i], endHere[i-1] + a[i]);
    }
    // startHere
    startHere[n-1] = a[n-1];
    for (int i = n-2; i >= 0; --i) {
        startHere[i] = max(a[i], startHere[i+1] + a[i]);
    }

    long long ans = *max_element(endHere.begin(), endHere.end()); // no deletion case (Kadane)

    for (int i = 1; i + 1 < n; ++i) {
        ans = max(ans, endHere[i-1] + startHere[i+1]);
    }
    // Edge deletions (delete first or last) do not connect two parts; but no-deletion Kadane already covers best.
    return ans;
}

/*
  Max circular subarray sum (optional). Returns maximum non-empty circular subarray sum.
  - If all numbers are negative, the answer is the maximum element.
*/
long long maxCircularSubarray(const vector<long long>& a) {
    long long normalMax = kadane(a);

    long long total = 0;
    vector<long long> b = a;
    for (auto x : a) total += x;

    // Minimum subarray sum via Kadane on inverted values
    for (auto &x : b) x = -x;
    long long minSub = -kadane(b);

    // If all negative, wrapping would choose empty; return the best (least negative) element
    if (minSub == total) return normalMax; // all numbers negative
    return max(normalMax, total - minSub);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*
      Demo:
        Input format (for quick testing):
          n
          a1 a2 ... an
        We print:
          1) Kadane maximum subarray sum
          2) Max subarray sum with one deletion
          3) Max circular subarray sum (optional)
    */
    int n;
    if (!(cin >> n)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    cout << "Kadane (max subarray sum): " << kadane(a) << "\n";
    cout << "Max subarray sum with one deletion: " << maxSubarrayOneDeletion(a) << "\n";
    cout << "Max circular subarray sum (optional): " << maxCircularSubarray(a) << "\n";
    return 0;
}
