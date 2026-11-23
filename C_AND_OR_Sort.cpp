#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(is_sorted(s.begin(), s.end()))
    {
        cout << 0 << endl;
        return;
    }
    if(s[0] == '1')
    {
        cout << count(s.begin(), s.end(), '0') << endl;
        return;
    }
    int d = -1;
    for(int i = 0; i< n; i++)
    {
        if(s[i] == '1') 
        {
            d = i;
            break;
        }
    }
    int cnt0 = count(s.begin(), s.end(), '0');
    int pref = 0;
    int suf = cnt0;
    int ans = n;
    for(int i = 0; i<= n; i++)
    {
        if(i >= d) ans = min(ans, pref+suf);
        if(i < n)
        {
            if(s[i] == '1') pref++;
            else suf--;
        }
    }
    cout << ans << endl;
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