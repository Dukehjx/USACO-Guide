// Basic usage of stack and queue; match parentheses with stack

#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main() {
    // Stack usage: Reverse numbers
    stack<int> st;
    for (int i = 1; i <= 5; i++) st.push(i);
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // Queue usage: Print in input order
    queue<string> q;
    q.push("USACO");
    q.push("Silver");
    q.push("Gold");
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Parentheses matching
    string s;
    cin >> s;
    stack<char> match;
    bool ok = true;
    for (char c : s) {
        if (c == '(') match.push(c);
        else if (c == ')') {
            if (match.empty()) ok = false;
            else match.pop();
        }
    }
    if (ok && match.empty()) cout << "Balanced" << endl;
    else cout << "Not balanced" << endl;
    return 0;
}
