#include <bits/stdc++.h>
using namespace std;
int sum;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    int k, t;
    cin >> k;
    while (k--) {

        cin >> t;
        if (t == 0) {
            sum -= s.top();
            s.pop();
        }
        else {
            s.push(t);
            sum += t;
        }
    }
    cout << sum;


}
