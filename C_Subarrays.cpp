#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    vector<int>pref(n+1);
    for(int i = 1; i<=n; i++)
    {
        pref[i] = (pref[i-1]+ a[i-1]%k) % k;
    }

    vector<ll>b(k,0);
    ll ans = 0;
    for(int i = 0; i<= n; i++)
    {
        if(i-k-1 >= 0) b[pref[i-k-1]]++;
        ans += b[pref[i]];
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