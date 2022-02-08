#include <bits/stdc++.h>
using namespace std;
int f(int n) {
    if (n > 2)
        n *= f(n - 1);
    return n;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, r = 1;
    cin >> n;
    if (n != 0)
        r = f(n);
    cout << r;
}

 
