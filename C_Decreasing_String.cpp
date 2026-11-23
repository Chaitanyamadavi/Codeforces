#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    string s;
    ll n;
    cin >> s >> n;
    n--;
    int cur = s.length();
    vector<char>a;
    bool ok = (n < cur);
    s += '$';
    for(char c: s)
    {
        while(!ok && !a.empty() && a.back() > c)
        {
            n -= cur;
            cur--;
            a.pop_back();
            if(n < cur) ok = true;
        }
        a.push_back(c);
    }
    cout << a[n] ;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {   
        solve();
    }
    return 0;
}