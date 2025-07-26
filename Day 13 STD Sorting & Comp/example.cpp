// Sorting with custom comparators: pairs and structs

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Cow {
    int height, weight;
    string name;
};

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++) cin >> vp[i].first >> vp[i].second;

    // Sort pairs by second, then first
    sort(vp.begin(), vp.end(), [](pair<int,int>& a, pair<int,int>& b) {
        if (a.second != b.second) return a.second < b.second;
        return a.first < b.first;
    });

    for (auto p : vp) cout << p.first << " " << p.second << endl;

    // Now sort cows by name
    int m;
    cin >> m;
    vector<Cow> herd(m);
    for (int i = 0; i < m; i++) cin >> herd[i].name >> herd[i].height >> herd[i].weight;

    // Sort by height ascending
    sort(herd.begin(), herd.end(), [](Cow a, Cow b) {
        return a.height < b.height;
    });

    for (auto cow : herd) cout << cow.name << " " << cow.height << " " << cow.weight << endl;

    return 0;
}
