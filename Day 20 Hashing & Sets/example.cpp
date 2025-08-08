// Use sets to remove duplicates and check membership

#include <iostream>
#include <set>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    // Remove duplicates from numbers
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int x : s) cout << x << " ";
    cout << endl;

    // Fast membership check for strings
    unordered_set<string> us;
    us.insert("apple");
    us.insert("banana");
    us.insert("pear");
    string query;
    cin >> query;
    if (us.count(query)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
