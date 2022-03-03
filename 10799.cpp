#include <bits/stdc++.h>
using namespace std;
int cnt;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> s;
    string a;
    cin >> a;
    int l = a.length();
    for (int i = 0; i < l; i++) {
        if (a[i] == '(') {
            s.push(a[i]);
        }
        else {
            if (a[i - 1] == '(') {
                s.pop();
                cnt += s.size();
            }
            else {
                s.pop();
                cnt++;
            }
        }
    }
    cout << cnt;
    
  

}
