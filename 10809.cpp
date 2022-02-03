#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[26];
    fill(arr, arr + 26, -1);
    string a;
    int i = 0;
    cin >> a;
    for (auto c : a) {
        if(arr[c-'a']<0)
        arr[c - 'a']=i;
        i++;
        }
    for (int i = 0; i < 26; i++)cout << arr[i] <<' ';
}