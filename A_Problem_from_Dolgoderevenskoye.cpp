#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    ll x;
    cin >> x;

    int cnt = 0;
    while(x % 2 == 0)
    {
        x /= 2;
        cnt++;
    }
    cout << (cnt == 1 ? "No\n": "Yes\n"); 
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