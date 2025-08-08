// Using map and unordered_map for frequency counting and reverse lookup

#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> freq;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        freq[s]++;
    }

    // Print frequency of each string
    for (auto [key, val] : freq) {
        cout << key << ": " << val << endl;
    }

    // Map scores to names
    map<int, string> id_to_name;
    id_to_name[101] = "Alice";
    id_to_name[102] = "Bob";
    id_to_name[103] = "Charlie";

    int query;
    cin >> query;
    if (id_to_name.count(query)) cout << id_to_name[query] << endl;
    else cout << "Not found" << endl;

    return 0;
}