#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    ll cnt = 0;
    for(ll i = 1; i< n; i++)
    {
        if( a[i-1] > a[i])
        {
            cnt += abs(a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout << cnt << endl;

    return 0;
}