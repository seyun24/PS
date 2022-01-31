#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    int n;
    cin >> n;
    while (n--) {
        string a;
        cin >> a;
        if (a == "push") {
            int c;
            cin >> c;
            s.push(c);
        }
        else if (a == "top") {
            if (s.size() != 0)
                cout << s.top() << '\n';
            else cout << -1 << '\n';
        }
        else if (a == "size") {
            cout << s.size() << '\n';
        }
        else if (a == "empty") {
            cout << s.empty() << '\n';
        }
        else if (a == "pop") {
            if (s.size() != 0) {
                cout << s.top() << '\n';
                s.pop();
            }
            else cout << -1 << '\n';
        }
    }


}