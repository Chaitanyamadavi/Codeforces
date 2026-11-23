#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    ll n = s.length();
    string res = "";
    if(s[0] >= '5' && s[0] != '9') res += (9 - (s[0] -'0'))+ '0'; 
    else res += s[0];
    for(ll i = 1; i< n; i++)
    {
        if(s[i] >= '5') res += (9 - (s[i] -' 0'))+ '0' ;
        else res += s[i];
    }
    cout << res << endl;

    return 0;
}