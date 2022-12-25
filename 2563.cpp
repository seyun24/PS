#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y,cnt=0;
    cin>>n;
    while(n--){
        cin>>x>>y;
        for(int i=y;i<y+10;i++){
            for(int j=x;j<x+10;j++){
                if(!a[i][j]){
                    cnt++;
                    a[i][j]=1;
                }
            }
        }
    }
    cout<<cnt;
}
