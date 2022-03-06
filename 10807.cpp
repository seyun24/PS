#include <bits/stdc++.h>
using namespace std;
    int arr[201];
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,D,V;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> D;
        arr[D+100]++;
    }
   
    cin >> V;
    cout<<arr[V + 100];
}
