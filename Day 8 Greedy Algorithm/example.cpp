// Greedy Coin Change: Minimize the number of coins

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;           // n = number of coin types, x = amount
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];
    sort(coins.rbegin(), coins.rend()); // Sort coins descending

    int count = 0;
    for (int c : coins) {
        int take = x / c;
        count += take;
        x -= take * c;
    }

    if (x == 0) cout << count << endl;
    else cout << -1 << endl; // Not possible with given coins
    return 0;
}
