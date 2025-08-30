// Frequency counting patterns: numbers (unordered_map), sorted output, mode, and letter counts.

#include <bits/stdc++.h>
using namespace std;

// Count lowercase letters 'a'..'z' in a word
void countLetters(const string& s) {
    vector<int> cnt(26, 0);
    for (char c : s) {
        if ('a' <= c && c <= 'z') cnt[c - 'a']++;
        else if ('A' <= c && c <= 'Z') cnt[c - 'A']++; // handle uppercase too
    }
    // Print nonzero letters as: letter:count (in alpha order)
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            cout << char('a' + i) << ":" << cnt[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ---- Part 1: Count integers and print in ascending value order ----
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<long long, int> freq;
    freq.reserve(n * 2); // minor perf hint
    for (auto x : a) freq[x]++;

    // Move to vector and sort by value ascending for ordered output
    vector<pair<long long,int>> items(freq.begin(), freq.end());
    sort(items.begin(), items.end(), [](auto& p, auto& q){
        return p.first < q.first; // sort by value
    });

    // Print "value:count" ascending by value
    for (auto &kv : items) {
        cout << kv.first << ":" << kv.second << " ";
    }
    cout << "\n";

    // ---- Part 2: Find the mode (max frequency; tie -> smallest value) ----
    long long bestValue = 0;
    int bestCount = -1;
    for (auto &kv : freq) {
        long long val = kv.first;
        int c = kv.second;
        if (c > bestCount || (c == bestCount && val < bestValue)) {
            bestCount = c;
            bestValue = val;
        }
    }
    cout << "mode=" << bestValue << " freq=" << bestCount << "\n";

    // ---- Part 3: Count letters in a single word (demonstrates bucket array) ----
    string word;
    if (cin >> word) {
        countLetters(word);
    }

    return 0;
}