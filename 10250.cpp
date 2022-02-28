#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, w, n,t;
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        int ans = 0;
        cin >> h >> w >> n;
        if (n % h >0) {
            ans = (n % h) *100+ n / h+1;
        }else
            ans = h*100+ n / h;
        cout << ans<<"\n";
    }
}
