#include <bits/stdc++.h>
using namespace std;
int arr[246913];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    arr[1]=1;
    for (int i=2; i<= sqrt(246912); i++){
        if(arr[i])continue;
        for (int j = i+i; j <=246912; j+=i) arr[j]=1;
    }


    while(1) {
        int n;
        int cnt = 0;
        cin >> n;
        if(n==0) break;
        for (int i = n+1; i <= 2 * n; i++) {
            if (!arr[i])cnt++;
        }
        cout << cnt <<"\n";
    }
}
