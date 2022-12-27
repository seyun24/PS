#include <bits/stdc++.h>
using namespace std;

string n;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    sort(n.begin(),n.end(),greater<>());
    cout << n;
}
