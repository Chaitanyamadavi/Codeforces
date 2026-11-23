#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    ll x;
    cin >> x;
    ll y = 1;
    while( y <= x)
    {
        y *= 10;
    }
    cout << y+1 << endl;
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