#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,m,d;
    cin >> n >> m >> d;
    int val = d/m;
    if(val < 1) cout << n << endl;
    else 
    {
        int h = val+1;
        int ans = (n+h-1)/h;
        cout << ans << endl;
    }

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