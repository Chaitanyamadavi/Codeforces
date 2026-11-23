#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string vowel = "AEIOUYaeiouy";
    string res = "";
    int n = s.length();
    char ch;
    for(int i = 0; i< n; i++)
    {
        if(vowel.find(s[i]) == string::npos)
        {
            res.push_back('.');
            ch = tolower(s[i]);
            res.push_back(ch);
        }
    }
    cout << res << endl;
    return 0;
}