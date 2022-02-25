#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
	int cnt = 0;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		
		bool q= true;

		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < j; k++) {
				if (str[j] != str[j - 1] && str[j] == str[k]) {
					q = false;
					break;
				}
			}
		}
		if (q)cnt++;
	}

	cout << cnt;
}
