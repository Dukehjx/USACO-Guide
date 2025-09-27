#include <bits/stdc++.h>
using namespace std;

// Example: Fibonacci with Memoization (Top-Down DP)
const int MAXN = 1000;
long long dp[MAXN];

long long fib(int n) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n]; // reuse stored result
    return dp[n] = fib(n-1) + fib(n-2);
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n;
    cout << "Enter n for Fibonacci: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}
