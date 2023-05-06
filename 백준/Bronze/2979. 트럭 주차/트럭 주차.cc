#include <bits/stdc++.h>
using namespace std;

int sum;
int A, B, C;
int arr[101];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y; 


        for (; x < y; x++) {
            arr[x - 1]++;
        }
    }

    for (int c : arr) {
        if (c == 1)sum += A;
        else if (c == 2)sum += B*2;
        else if(c==3) sum +=C*3;
    }

    cout << sum;
}