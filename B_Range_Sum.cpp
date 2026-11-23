#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    vector<ll>pref(n);
    pref[0] = a[0];
    for(int i = 1; i< n; i++)
    {
        pref[i] = pref[i-1] + a[i];
    }

    vector<ll>res;
    while(k--)
    {   
        int l,r;
        cin >> l >> r;
        ll val = pref[r-1] - (l > 1 ? pref[l-2] : 0);
        res.push_back(val);
    }
    for(ll x: res) cout << x << '\n';
    return 0;
}