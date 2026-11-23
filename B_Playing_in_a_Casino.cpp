#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,m;
    cin >> n >> m;
    vector<vector<int>>a(n, vector<int>(m));
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< m; j++)
        {
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for(int j = 0;  j < m; j++)
    {
        vector<int>v;
        for(int i = 0; i< n; i++)
        {
            v.push_back(a[i][j]);
        }
        sort(v.begin(), v.end());
        ll pref = 0;
        for(int i = 0; i< n; i++)
        {
            ans += 1LL * v[i] * i - pref;
            pref += v[i];
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