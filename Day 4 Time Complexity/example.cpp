// Sum of an array: O(N) time complexity

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Input: number of elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum << endl; // Output: sum of the array
    return 0;
}