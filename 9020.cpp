#include <bits/stdc++.h>
using namespace std;
int arr[10001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    arr[1]=1;
    for (int i=2; i<= sqrt(10000); i++){
        if(arr[i])continue;
        for (int j = i+i; j <=10000; j+=i) arr[j]=1;
    }

    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int n;
        int a;
        int b;
        cin >> n;
        int temp=n;
        for(int j=2; j<n; j++){
            if(!arr[j]){
                if(!arr[n-j]){
                    temp=min(abs(n-2*j),temp);
                    if(temp==abs(n-2*j)) {
                        a = j;
                        b=n-j;
                    }
                }
            }
        }
        cout << b <<' '<< a<<"\n";
    }

}
