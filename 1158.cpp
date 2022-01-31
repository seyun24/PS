#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, count;
    list<int> lst = {};
    
    cin >> n >> k;
    for (int i = 1; i <= n; i++)lst.push_back(i);
    auto itr = lst.begin();
    for (int i = 0; i < k - 1; i++)itr++;
    cout << '<';
    while (n > 0) {
        if (n == 1) {
            cout << *itr;
            break;
        }
        cout << *itr << ", ";
        itr = lst.erase(itr);
        if (itr == lst.end())itr = lst.begin();
        n--;
        for (int i = 0; i < k - 1; i++) { 
            itr++;
            if (itr == lst.end())itr = lst.begin();
        }
    }
    cout << '>';
}
   