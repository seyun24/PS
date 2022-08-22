#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin >> m >>n;
    arr[1]=1;
    for (int i=2; i<= sqrt(n); i++){
        if(arr[i])continue;
        for (int j = i+i; j <=n; j+=i) arr[j]=1;
    }
    for(int i=m; i<=n; i++){
        if (!arr[i])cout<<i<<"\n";
    }
}
