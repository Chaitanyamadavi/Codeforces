#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    string x;
    cin >> c;
    cin.ignore();
    
    getline(cin,x);

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string res = "";
    for(char ch : x)
    {
        int j = s.find(ch);
        if(c == 'R')
        {
            res += s[j-1];
        }
        else res += s[j+1];
    }
    cout << res << '\n';

    return 0;
}