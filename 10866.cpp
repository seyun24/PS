#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    deque<int> Q;
    cin >> n;
    while (n--) {
        string a;
        cin >> a;
        if (a == "push_front") {
            int x;
            cin >> x;
            Q.push_front(x);
        }else if (a == "push_back") {
            int x;
            cin >> x;
            Q.push_back(x);
        }
        else if (a == "pop_front") {
            if (Q.size() != 0) {
                cout << Q.front() << '\n';
                Q.pop_front();
            }
            else
                cout << -1 << '\n';
        }
        else if (a == "pop_back") {
            if (Q.size() != 0) {
                cout << Q.back() << '\n';
                Q.pop_back();
            }
            else
                cout << -1 << '\n';
        }
        else if (a == "size") {
            cout << Q.size() << '\n';
        }
        else if (a == "empty") {
            cout << Q.empty() << '\n';
        }
        else if (a == "front") {
            if (Q.size() != 0) {
                cout << Q.front() << '\n';
            }
            else
                cout << -1 << '\n';
        }
        else if (a == "back") {
            if (Q.size() != 0) {
                cout << Q.back() << '\n';
            }
            else
                cout << -1 << '\n';
        }
    }
}