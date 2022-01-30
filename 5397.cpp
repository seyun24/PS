#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a;
        list<char> L;
        auto t = L.begin();
        cin >> a;
        for (auto c : a) {
            if (c == '>') {
                if (t != L.end())t++;
            }
            else if(c == '<') {
                if (t != L.begin())t--;
            }
            else if (c == '-') {
                if (t != L.begin()) {
                    t--;
                    L.erase(t);
                }
            }
            else {
                L.insert(t, c);
            }
        }
        for (auto c : L) cout << c;
        cout << '\n';
    }
}
   