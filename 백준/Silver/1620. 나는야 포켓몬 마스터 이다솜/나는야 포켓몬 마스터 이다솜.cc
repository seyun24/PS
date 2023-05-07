#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    map<int, string> index;
    map<string, int> name;

    cin >> n >> m;
    for (int i = 1; i <=n; i++) {
        string str;
        cin >> str;
        index[i] = str;
        name[str] = i;
    }
    for (int i = 0; i<m;i++ ) {
        string que;
        cin >> que;
        if (atoi(que.c_str()))
            cout << index[atoi(que.c_str())] << "\n";
        else
            cout << name[que] << "\n";
    }
    
}