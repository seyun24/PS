#include <bits/stdc++.h>
using namespace std;
    int a[2][7];
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, k, Y, S;
    int min = 0;
        cin >> N>> k;
    for (int i = 0; i < N; i++) {
        cin >> S >> Y;
        a[S][Y]++;
    }
    for (int s = 0; s < 2; s++) {
        for (int y = 1; y < 7; y++) {
            if (a[s][y] % k) {
                min++;
             }
            min+=a[s][y] / k;
        }
    }
    cout << min;
}
