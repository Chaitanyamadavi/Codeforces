#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    map<int,int>mp;
    for(int x:a) mp[x]++;
    
    for(int i = 1; i <= n; i++)
    {
        for(auto it = mp.rbegin(); it != mp.rend(); it++)
        {
            if(it->second >= i) cout << it ->first << " ";
        }
    }
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