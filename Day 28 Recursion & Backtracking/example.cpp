// example.cpp
// Day 28 – Recursion & Backtracking
// Example: Count solutions to the N-Queens problem using bitmasks.
//
// Input:
//   n   (1 ≤ n ≤ 14 recommended; try smaller n if time is tight)
// Output:
//   number of distinct solutions
//
// Idea:
//   Place one queen per row. Track which columns and diagonals are already used.
//   Use three bitmasks: cols, diag1, diag2. At row r, available positions are those
//   where the bit is 0 in all three masks. Recurse, then backtrack.
//
// Complexity:
//   Much faster than naive; classic backtracking with strong pruning.

#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int n;
long long solutions = 0;

// cols: used columns mask
// d1: used main diagonals mask (r - c constant -> shifted to [0..2n-2])
// d2: used anti-diagonals mask (r + c constant -> [0..2n-2])
void dfs(int row, int64 cols, int64 d1, int64 d2) {
    if (row == n) { solutions++; return; }
    // Bits available: n columns -> use low n bits
    int64 full = (1LL << n) - 1;
    // Shift diagonals to align with columns for this row
    int64 blocked = cols | (d1) | (d2);
    int64 avail = (~blocked) & full;
    while (avail) {
        int64 pick = avail & -avail;      // take lowest set bit
        avail -= pick;                    // remove it
        // Move to next row:
        // - columns: add pick
        // - main diag (d1): shift left by 1 when going to next row
        // - anti diag (d2): shift right by 1 when going to next row
        dfs(row + 1, cols | pick, (d1 | pick) << 1, (d2 | pick) >> 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if (!(cin >> n)) return 0;
    // Safety for very large n in slow environments
    if (n < 0 || n > 20) { cout << 0 << "\n"; return 0; }
    dfs(0, 0, 0, 0);
    cout << solutions << "\n";
    return 0;
}
