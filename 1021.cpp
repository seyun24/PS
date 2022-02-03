#include <bits/stdc++.h>
using namespace std;
   int ct;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<int> Q;
    int n,m;
    cin >> n;
    for (int i = 1; i < n + 1; i++) Q.push_back(i);
    cin >> m;
    while (m--) {
        int c;
        cin >> c;
        int idx = find(Q.begin(), Q.end(), c) - Q.begin();
        
        while (Q.front() != c) {
            if (idx < Q.size() - idx) {
                Q.push_back(Q.front());
                Q.pop_front();
            }
            else {
                Q.push_front(Q.back());
                Q.pop_back();
            }
            ct++;
        }
        Q.pop_front();
    }
    cout << ct;
}