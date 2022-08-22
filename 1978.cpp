#include <bits/stdc++.h>
using namespace std;

int arr[1001];
int cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    arr[1]=1;
    for(int i=2; i<=100; i++){
        if(arr[i])continue;
        for(int j=i+i; j<=1000; j+=i)
            arr[j]=1;
    }

    for(int i=0; i<n; i++){
        int number;
        cin >> number;
        if(!arr[number])cnt++;
    }
    cout << cnt;
}
