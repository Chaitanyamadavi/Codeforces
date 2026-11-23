#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    ll x,y,z,k;
    cin >> x >> y >> z >> k;

    if(x <= 3)
    {
        cout << 1 << endl;
        return;
    }
    ll val = abs(y-z);
    val = min(val, x-val);
    cout << val + k << endl;

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