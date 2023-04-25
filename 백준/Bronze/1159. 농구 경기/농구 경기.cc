#include <bits/stdc++.h>
using namespace std;

int arr[26];
int n, cnt;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr[*s.begin() - 97]++;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] >= 5) {
            cout << char(i + 'a');
            cnt++;
        }
    }
    if (!cnt) cout << "PREDAJA";
    
}