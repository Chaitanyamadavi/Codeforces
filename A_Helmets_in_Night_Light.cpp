#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n, p;
    cin >> n >> p;
    vector<pair<int,int>>a(n);
    for(int i = 0; i< n; i++) cin >> a[i].first ;
    for(int i = 0; i < n; i++) cin >> a[i].second;

    sort(a.begin(), a.end(), [](auto &x, auto &y){
        return x.second < y.second;
    });
    ll cost = p;
    int rem = n-1;
    for(auto &[num, val] : a)
    {   
        if(val >= p) break;
        int cnt = min(num, rem);
        cost += 1LL*cnt*val;
        rem -= cnt;
        if(rem == 0) break;
    }
    if(rem > 0) cost += 1LL*rem*p;
    cout << cost << endl;
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