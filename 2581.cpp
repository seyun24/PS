#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int sum;
int cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin >>m >>n;
    arr[1]=1;
    int p=10000;
    for(int i=2; i<=sqrt(n); i++){
        if(arr[i])continue;
        for(int j=i+i; j<=n; j+=i)
            arr[j]=1;
    }

    for(int i=m; i<=n; i++){
        if(!arr[i]) {
            p=min(i, p);
            sum+=i;
            cnt++;
        }
    }
    if(cnt!=0){
        cout << sum <<"\n"<<p;
    }
    else cout<< -1;

}
