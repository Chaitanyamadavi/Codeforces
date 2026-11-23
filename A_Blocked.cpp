#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    unordered_map<int,int>mp;
    for(int &x:a) mp[x]++;

    for(auto &[val, freq]: mp)
    {
        if(freq > 1) 
        {
            cout << -1 << endl;
            return;
        }
    }
    sort(a.rbegin(), a.rend());
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