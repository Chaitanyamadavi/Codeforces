#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    ll a,b,c;
    cin >> a >> b >> c;

    int val1 = abs(a-b);
    int val2 = abs(a+c -b);
    cout << max(val1, val2) << endl;

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