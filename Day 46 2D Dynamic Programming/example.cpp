#include <bits/stdc++.h>
using namespace std;

/*
  Day 46 Example: 2D DP – LCS and Edit Distance
  ------------------------------------------------
  This file demonstrates two classic 2D DP problems.

  1) LCS (Longest Common Subsequence)
     - dp[i][j] = LCS length of s[0..i-1] and t[0..j-1].
     - Reconstruction to print one LCS string.

  2) Edit Distance (Levenshtein distance)
     - dp[i][j] = min operations to convert s[0..i-1] -> t[0..j-1].
     - Operations: insert, delete, replace (cost = 1 each).
*/

// -------------------- LCS with reconstruction --------------------
string lcs_string(const string& s, const string& t) {
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i-1] == t[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // Reconstruct one LCS by walking from (n, m) to (0, 0)
    string ans;
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (s[i-1] == t[j-1]) {
            ans.push_back(s[i-1]);
            i--; j--;
        } else if (dp[i-1][j] >= dp[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// -------------------- Edit Distance (Levenshtein) --------------------
int edit_distance(const string& s, const string& t) {
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for (int i = 0; i <= n; i++) dp[i][0] = i;  // delete all
    for (int j = 0; j <= m; j++) dp[0][j] = j;  // insert all

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i-1] == t[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min({ dp[i-1][j],     // delete
                                     dp[i][j-1],     // insert
                                     dp[i-1][j-1] }); // replace
            }
        }
    }
    return dp[n][m];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Enter two strings s and t:\n";
    string s, t;
    if (!(cin >> s >> t)) return 0;

    string l = lcs_string(s, t);
    int ed = edit_distance(s, t);

    cout << "LCS length = " << l.size() << "\n";
    cout << "One LCS = " << l << "\n";
    cout << "Edit distance = " << ed << "\n";

    /*
      Example
      -------
      Input:
      abcde ace
      Output:
      LCS length = 3
      One LCS = ace
      Edit distance = 2
    */
    return 0;
}
