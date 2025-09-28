#include <bits/stdc++.h>
using namespace std;

// Example Gold Greedy Problem: Minimum Number of Platforms Required
// Given arrival and departure times of trains, find the minimum number of platforms needed.

int main() {
    int n;
    cout << "Enter number of trains: ";
    cin >> n;
    vector<int> arrival(n), departure(n);
    cout << "Enter arrival times: ";
    for (int i = 0; i < n; i++) cin >> arrival[i];
    cout << "Enter departure times: ";
    for (int i = 0; i < n; i++) cin >> departure[i];

    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());

    int i = 0, j = 0;
    int platforms = 0, maxPlatforms = 0;

    while (i < n && j < n) {
        if (arrival[i] <= departure[j]) {
            platforms++;
            maxPlatforms = max(maxPlatforms, platforms);
            i++;
        } else {
            platforms--;
            j++;
        }
    }

    cout << "Minimum number of platforms required = " << maxPlatforms << "\n";
    return 0;
}
