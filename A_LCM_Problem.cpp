#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int l,r;
    cin >> l >> r;
    
    if(2*l <= r) cout << l << " " << l*2 << endl;
    else cout << -1 << " " << -1 << endl;
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