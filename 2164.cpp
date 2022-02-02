#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    queue<int> Q;
    cin >> n;
    for (int i = 1; i < n+1; i++) {
        Q.push(i);
    }
    if (Q.size() == 1) {
        cout << Q.front();
        return 0;
    }
    while (Q.size()) {
        Q.pop();
        if (Q.size() != 1) {
            Q.push(Q.front());
            Q.pop();
        }
        else{
            cout << Q.front();
            return 0;
        }
            
    }
}