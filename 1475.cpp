#include <bits/stdc++.h>
using namespace std;
int d[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    if (N == 0)cout << '1';
    else {
        while (N != 0) {
            d[N % 10]++;
            N /= 10;
        }
        int a = (d[9] + d[6]+1 ) / 2;
        d[9] = a;
        d[6] = a;
        sort(d, d + 10);
        cout << d[9];
    }


}
