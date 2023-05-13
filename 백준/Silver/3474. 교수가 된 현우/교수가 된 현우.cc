#include <bits/stdc++.h>
using namespace std;


int main(void)
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long n;
        int ans=0, ans2=0;
        cin >> n;
        for (int i = 2; i <= n; i*=2) {
            ans += n / i;
        }
        for (int i = 5; i <= n; i*=5) {
            ans2 += n / i;
        }
        cout << min(ans, ans2) << "\n";
        
    }
}