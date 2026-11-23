#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    ll l = 0, r = 1000000001LL;
    for(int i = 0; i<n; i++)
    {
        if((i & 1) == 0) r = min(r,a[i]);
        else l = max(l, a[i]);
    }

    cout << ((n&1) == 0 && l+2 <= r ? "YES\n": "NO\n");
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