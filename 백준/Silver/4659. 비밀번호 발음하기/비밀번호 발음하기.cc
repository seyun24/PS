#include <bits/stdc++.h>
using namespace std;


int arr[26];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    arr['a' - 97] = 1;
    arr['e' - 97] = 1;
    arr['i' - 97] = 1;
    arr['o' - 97] = 1;
    arr['u' - 97] = 1;
    string str;
    while (true) {
        
        int lcnt =0, vcnt=0;
        int flag = 0;
        cin >> str;
        if (str == "end")break;
        
        for (char c : str) {
            if (arr[c-97]) {
                flag = 1;
                break;
            }
        }
       
     
        for (char c : str) {
            if (arr[c - 97]) {
                lcnt++;
                vcnt = 0;
            }
            else {
                lcnt = 0;
                vcnt++;
            }
            if (lcnt == 3 || vcnt == 3) {
                flag --;
                break;
            }
        }
        flag++;
         
           
        for (int i = 0; i < str.length()-1;i++ ) {
            if (str[i]!= 'e' && str[i] != 'o') {
                if (str[i] == str[i + 1]) {
                    flag--;
                    break;
                }
            }
        }
        flag++;
        if(flag==3)
            cout << "<" + str + "> is acceptable.\n";
        else
            cout << "<" + str + "> is not acceptable.\n";
    }
   
}