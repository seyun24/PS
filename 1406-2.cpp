#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> L;
    auto t = L.begin();
    string a;
    cin >> a;
    for (auto c : a) L.push_back(c);
    auto cursor = L.end();
    int m;
    cin >> m;
    while (m--) {
        char q;
        cin >> q;
        if (q == 'L') {
           if (cursor != L.begin()) cursor--;
        }
        else if (q == 'D') {
            if (cursor != L.end()) cursor++;
        }
        else if (q == 'B') {
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
        else if (q == 'P') {
            char p;
            cin >> p;
            L.insert(cursor, p);
        }
    }
    for (auto c : L)cout << c;
}
   