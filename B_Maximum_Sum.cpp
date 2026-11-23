#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    vector<ll>a(n);
    vector<bool>used(n+1,false);
    ll sum = 0;
    for(ll &x:a) 
    {
        cin >> x;
        sum += x;
    }
    sort(a.begin(), a.end());
    vector<ll>pref(n+1,0), suf(n+1,0);
    for(int i = 0; i< n; i++) pref[i+1] = pref[i] + a[i];
    for(int i = n-1; i >= 0; i--) suf[i] = suf[i+1]+ a[i];

    ll ans = 0;
    for(int i = 0; i<= k; i++)
    {
        ll p = pref[2*i];
        ll s = suf[n-(k-i)];
        ans = max(ans, (ll)sum- p- s);
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