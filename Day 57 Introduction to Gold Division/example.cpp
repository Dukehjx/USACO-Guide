#include <bits/stdc++.h>
using namespace std;

// Example Gold-Level Intro Problem: Activity Selection (Greedy)
// Select the maximum number of non-overlapping intervals.

struct Interval {
    int start, end;
};

bool cmp(const Interval& a, const Interval& b) {
    return a.end < b.end;
}

int main() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;
    vector<Interval> arr(n);
    cout << "Enter intervals (start end):" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i].start >> arr[i].end;

    sort(arr.begin(), arr.end(), cmp);
    int count = 0, lastEnd = -1;
    for (auto& it : arr) {
        if (it.start >= lastEnd) {
            count++;
            lastEnd = it.end;
        }
    }
    cout << "Maximum number of non-overlapping intervals = " << count << "\n";
    return 0;
}
