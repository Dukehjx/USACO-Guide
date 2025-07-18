// example.cpp
// Allocate an array of N elements and calculate their sum (O(N) space)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Input: array size
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum << endl; // Output: sum of the array
    return 0;
}