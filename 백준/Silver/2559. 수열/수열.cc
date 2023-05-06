#include <bits/stdc++.h>
using namespace std;
int psum[100001];
int n, k;
int value = -10000004;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i=1; i <= n; i++) {
        int temp;
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }
    for (int i = k; i <= n; i++) {
        value = max(value, psum[i] - psum[i - k]);
    }
    cout << value;
}