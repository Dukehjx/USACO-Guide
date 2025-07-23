// example.cpp
// Simulation Example: Simple Race

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // number of racers
    int winner = -1, max_dist = -1;
    for (int i = 1; i <= n; i++) {
        int speed, time;
        cin >> speed >> time;
        int distance = speed * time;
        if (distance > max_dist) {
            max_dist = distance;
            winner = i;
        }
    }
    cout << winner << endl; // Output: 1-based index of the winner
    return 0;
}
