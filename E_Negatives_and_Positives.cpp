#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    int pos = 0, neg= 0, zero= 0;
    for(ll x:a )
    {
        if(x > 0) pos++;
        if(x == 0) zero++;
        if(x < 0) neg++;
    }
    ll ans = 0;
    ll val = 1e18;
    for(ll x:a) val = min( val, abs(x));
    if(neg %2 != 0)
    {   
        if(zero > 0) 
        {   
            for(int i = 0; i< n; i++) ans += abs(a[i]);
        }
        else
        {   
            for(int i = 0; i< n; i++) ans += abs(a[i]);
            ans -= 2* val;
        }
    }
    else
    {
        for(int i = 0; i< n; i++) ans += abs(a[i]);
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