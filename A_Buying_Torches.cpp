#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    ll x,y,k;
    cin >> x >> y >> k;
    ll gain = x-1;
    ll req = k*(y+1) -1;
    ll ans = (req+gain -1)/gain +k;
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