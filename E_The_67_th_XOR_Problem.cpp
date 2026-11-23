#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    ll sum = 0;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            ll x = a[i]^a[j];
            if(x >= sum) sum = x;
        }
    }
    cout << sum << endl;
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