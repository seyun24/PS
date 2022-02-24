#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> c= { "c=","c-","dz=","d-","lj","nj","s=","z=" };
    int i;
    string s;
    cin >> s;
    for(int k=0; k<c.size(); k++)
        while (1) {
            i = s.find(c[k]);
            if (i == string::npos)break;
            s.replace(i, c[k].length(), "*");
        }
    cout << s.length();
}
