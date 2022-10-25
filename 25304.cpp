#include <bits/stdc++.h>
using namespace std;
long long sum;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int X, N;
    cin >> X >> N;

    for(int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        sum+=a*b;
    }
    if(sum==X)cout << "Yes";
    else cout << "No";
}
