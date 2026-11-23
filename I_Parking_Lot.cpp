#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll binpow(ll a, ll b)
{
    ll res = 1;
    while(b > 0)
    {
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << 3 * (3 * n- 1) * binpow(4, n - 3);

    return 0;
}