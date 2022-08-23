#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int number;
    int arr[6];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    arr[3]=2;
    arr[4]=2;
    arr[5]=8;

    for(int i=0; i<6; i++){
        cin >> number;
        if(arr[i]!=number)cout<<arr[i]-number<<' ';
        else cout << 0<<' ';
    }
}
