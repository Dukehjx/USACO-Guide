// Simulate rotating an array to the right by K positions

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Simulate k right rotations
    k %= n;
    vector<int> rotated(n);
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    for (int x : rotated) cout << x << " ";
    cout << endl;
    
    return 0;
}
