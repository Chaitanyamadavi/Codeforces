#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(int i = 0; i< n; i++)
    {
        ll x;
        cin >> x;
        a[i] = x%4;
    }

    unordered_map<int,int>mp;
    for(ll &x : a) mp[x]++;

    int odd = 0, even = 0, zero = 0;
    for(auto &[val, freq]:mp)
    {
        if(val == 0) zero+= freq;
        if(val == 1 || val == 3) odd+= freq;
        if(val == 2)  even += freq;
    }

    cout << max({odd, even, zero}) << '\n';
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