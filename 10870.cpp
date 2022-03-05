#include <bits/stdc++.h>
using namespace std;
int dp(int num) {
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return dp(num - 2) + dp(num - 1);
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << dp(n);
    
    

}
