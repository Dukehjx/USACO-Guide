// Reverse an array and count vowels in a string

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Reverse an array
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    reverse(arr.begin(), arr.end());
    for (int x : arr) cout << x << " ";
    cout << endl;

    // Count vowels in a string
    string s;
    cin >> s; // input a single word
    int vowel_count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel_count++;
        }
    }
    cout << vowel_count << endl;
    return 0;
}