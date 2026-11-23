#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string res = "";
    for(char ch: s) if(ch != '+') res += ch;
    sort(res.begin(), res.end());
    string ans = "";
    for(int i = 0; i< res.length(); i++)
    {
        ans += res[i];
        if(i != res.length() -1) ans += '+';
    }
    cout << ans << "\n";

    return 0;
}