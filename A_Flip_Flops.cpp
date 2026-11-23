#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    ll n,c,k;
    cin >> n >> c >> k;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    ll rem = k;
    sort(a.begin(), a.end());
    for(int i = 0; i< n; i++)
    {
        if(a[i] > c) break;
        ll add = min(c -a[i], rem);
        rem -= add;
        c += a[i] +add;
    } 
    cout << c << endl;
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