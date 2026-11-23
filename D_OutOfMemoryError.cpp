#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,m;
    ll h;
    cin >> n >> m >> h;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    vector<ll>org = a;
    ll x,y;
    for(int i = 0; i< m; i++)
    {
        cin >> x >> y;
        x--;
        a[x] += y;
        if(a[x] > h) a = org;
    }
    for(int x:a) cout << x << " ";
    cout << endl;
    
    

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