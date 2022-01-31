#include <bits/stdc++.h>
using namespace std;
int N, K, len = 0;
int nxt[5001];
int pre[5001];
vector<int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        pre[i] = (i == 1) ? N : i - 1;
        nxt[i] = (i == N) ? 1 : i + 1;
        len++;
    }
    int cur = 1;
    int i = 1;
    while (len != 0) {
        if (i%K==0) {
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur];
            v.push_back(cur);
            
            len--;
        }
        i++;
        cur=nxt[cur];
    }
    cout << "<";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << ">";
}
