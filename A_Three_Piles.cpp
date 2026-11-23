#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int a,b,c;
    cin >> a >> b >> c;

    int max_val = max({a,b,c});
    int min_val = min({a,b,c});
    if( max_val - min_val  == 2 && max_val - (a + b + c - max_val - min_val) == 1) cout << "YES\n";
    else cout << "NO\n";
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