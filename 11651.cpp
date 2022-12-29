#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int n, x, y;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(pair<int, int>(y, x));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        cout << v[i].second << " " << v[i].first<<"\n";
    
}

