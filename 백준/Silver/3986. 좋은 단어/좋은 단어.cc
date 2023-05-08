#include <bits/stdc++.h>
using namespace std;
int cnt;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++) {
        stack<char> word;
        cin >> str;
        for (char c : str) {
            if (word.empty()) {
                word.push(c);
            }
            else {
                if (word.top() == c) {
                    word.pop();
                }
                else
                    word.push(c);
            }
        }
        if (word.empty())cnt++;
    }
    cout << cnt;
}