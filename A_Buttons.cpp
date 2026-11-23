#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    ll a,b,c;
    cin >> a >> b >> c;

    if(c%2 != 0) a += 1;
    cout << (a > b ? "First\n": "Second\n");
    
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