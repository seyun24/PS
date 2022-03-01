#include <bits/stdc++.h>
using namespace std;
int ans;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin >> x;
    for (int i = 1; i < x + 1; i++) {
        int a, b, c;
        a = i / 100; 
        b = (i / 10) % 10; 
        c = i % 10; 

        if (i < 100) {
            ans++;
        }
        else if (a - b == b - c) ans++;
      }
    cout << ans;
}
