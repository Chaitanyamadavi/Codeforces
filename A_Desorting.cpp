#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    if(is_sorted(a.begin(), a.end()) == false)
    {
        cout << 0 << '\n';
        return;
    }
    ll min_val = LLONG_MAX;
    for(int i = 0; i< n-1; i++)
    {
        min_val = min(min_val, abs(a[i] - a[i+1]));
    }
    ll ans = min_val/2 +1;
    cout << ans << '\n';
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