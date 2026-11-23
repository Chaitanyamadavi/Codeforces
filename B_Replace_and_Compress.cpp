#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    int ans = 1;
    bool increase = false, decrease = false;

    for(int i = 1; i < n-1; i++)
    {
        if(s[i] == s[i - 1] && s[i] == s[i + 1])increase = true;
        if(s[i] != s[i - 1] && s[i] != s[i + 1])decrease = true;
    }

    if(increase) ans++;
    if(decrease) ans++;

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}