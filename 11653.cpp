#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    if(n==1) return 0;
    for(int i=2; i<=n; i++){
        while(n%i==0){
            cout << i << "\n";
            n/=i;
        }
    }
}
