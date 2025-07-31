// Demonstrating common operations for arrays, vectors, and lists

#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    // Static array
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    // Vector
    vector<int> v = {10, 20, 30};
    v.push_back(40);
    v[1] = 25;
    for (int x : v) cout << x << " ";
    cout << endl;

    // List
    list<int> l = {100, 200, 300};
    l.push_front(50);
    l.push_back(400);
    l.pop_front();
    for (int x : l) cout << x << " ";
    cout << endl;

    return 0;
}