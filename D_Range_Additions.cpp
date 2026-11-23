#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,m;
    cin >> n >> m;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    vector<ll>diff(n+1,0);
    while(m--)
    {
        int l,r;
        ll x;
        cin >> l >> r >> x;
        diff[l-1] += x;
        diff[r] -= x;
    }
    
    ll add = 0;
    for(int i = 0; i < n; i++)
    {
        add += diff[i];
        a[i] += add;
    }

    for(ll x:a) cout << x << " ";
    cout << endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}