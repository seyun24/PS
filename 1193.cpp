#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int i = 1;
    while (n > i) {
        n -= i;
        i++;
     }
    if (i % 2 == 1)
        cout << i + 1 - n<< '/' <<n;
    else
        cout << n<< '/' << i + 1 -n;
    
    
    

}
