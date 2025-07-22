// Brute force: Find the pair of numbers with the smallest absolute difference

#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int min_diff = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // i < j to avoid repeats
            int diff = abs(arr[i] - arr[j]);
            if (diff < min_diff) min_diff = diff;
        }
    }
    cout << min_diff << endl;
    return 0;
}