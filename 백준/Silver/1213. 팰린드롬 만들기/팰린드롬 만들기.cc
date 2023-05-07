#include <bits/stdc++.h>
using namespace std;

int cnt[26];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str, mid = "", ans = "";
    cin >> str;
    for (char c : str) 
        cnt[c - 'A']++;
    int i = 0;
    int flag = 0;
    for (int c : cnt) {
        if (c % 2 != 0) {
            flag++;
            mid += char(i + 'A');
            cnt[i]--;
        }
        if (flag == 2) {
            cout << "I'm Sorry Hansoo";
            return 0;
        }
        i++;
    }
    i = 0;
    for (int c : cnt) {
        if (c > 1) {
            for (int j = 0; j < c; j+=2) {
                ans += char(i + 'A');
            }
        }
        i++;
    }
    string temp;
    temp = ans;
    reverse(ans.begin(), ans.end());
    cout << temp + mid + ans;
}