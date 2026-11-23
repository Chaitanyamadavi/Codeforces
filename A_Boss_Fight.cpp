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
    ll cnt = 0;
    for(int x:a)
    {
        mp[x]++;
        cnt+= x;
    }
    
    int high = 0, max_val = 0;
    for(auto &[val, freq]: mp)
    {
        if(freq> high)
        {
            high = freq;
            max_val = val;
        }
    }
    int m = max(0, 2*high-n-2);
    cout << cnt - 1LL* m*max_val << endl;
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