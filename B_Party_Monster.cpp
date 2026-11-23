#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 0, r = 0;
    for(char ch: s)
    {
        if(ch == '(') r++;
        else l++;
    }
    if(l != r) cout << "NO\n";
    else cout << "YES\n";
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