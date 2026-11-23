#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int x,y;
    ll k;
    cin >> x >> y >> k;

    ll i = 0;
    ll cnt = 0;
    ll d = y - x;
    while(i < k && x + i <= d)
    {
        ll p = y + i;
        ll emp = x+i;
        ll val = p%emp;
        cnt += val;
        i++;
    }
    ll ans = cnt + (k-i)*d;
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