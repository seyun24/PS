#include <bits/stdc++.h>
using namespace std;
int cnt;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    getline(cin,a);
    for (auto c : a) {
        if (c == ' ')cnt++;
    }
    if (*(a.end()-1) == ' ')cnt--;
    if (*(a.begin()) == ' ')cnt--;
    
    cout << cnt + 1;
}
