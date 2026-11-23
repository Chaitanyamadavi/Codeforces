#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    vector<pair<ll,ll>>v;
    for(int i = 0; i< n; i++)
    {
        ll x = a[i] % k;
        if(x == 0) x = k;
        v.push_back({x,i+1});
    }
    sort(v.begin(), v.end(), [](auto &a, auto&b)
    {
        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    });

    for(auto &x: v) cout << x.second << " ";
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