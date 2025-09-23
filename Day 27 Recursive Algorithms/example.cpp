// example.cpp
// Day 27 – Recursive Algorithms (Basics)
// Demonstrates three classic recursive patterns:
// 1) Factorial (linear recursion)
// 2) Fibonacci with memoization (avoid exponential blowup)
// 3) Fast exponentiation (divide & conquer, O(log b))

#include <bits/stdc++.h>
using namespace std;

// 1) Factorial
long long fact(long long n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

// 2) Fibonacci (memoized), valid for n up to 90 (fits in unsigned long long)
unsigned long long fibMemo[91];
bool fibInit = false;
unsigned long long fib(int n) {
    if (!fibInit) {
        memset(fibMemo, 0, sizeof(fibMemo));
        fibMemo[0] = 0;
        fibMemo[1] = 1;
        fibInit = true;
    }
    if (n <= 1) return fibMemo[n];
    if (fibMemo[n] != 0 || n == 0) return fibMemo[n];
    return fibMemo[n] = fib(n - 1) + fib(n - 2);
}

// 3) Fast exponentiation: compute a^b (for non-negative b)
long long fastPow(long long a, long long b) {
    if (b == 0) return 1;
    long long half = fastPow(a, b / 2);
    long long res = half * half;
    if (b % 2 == 1) res *= a;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Demo I/O:
    // Input:
    // n         (for factorial and fibonacci)
    // a b       (for fast exponentiation a^b)
    long long n, a, b;
    if (!(cin >> n)) return 0;
    cout << "fact(" << n << ") = " << fact(n) << "\n";

    int fn = (int)min<long long>(n, 90); // safeguard for Fibonacci
    cout << "fib(" << fn << ")  = " << fib(fn) << "\n";

    if (cin >> a >> b) {
        cout << a << "^" << b << " = " << fastPow(a, b) << "\n";
    }
    return 0;
}
