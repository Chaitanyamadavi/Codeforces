#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    map<ll,ll>mp;
    for(ll x:a) mp[x]++;

    vector<ll>front,back,mid;
    for(auto &[val,freq] : mp)
    {
        if(freq == 1) front.push_back(val);
        if(freq > 1 && freq <= 2)
        {
            front.push_back(val);
            back.push_back(val);
        }
        if(freq >2)
        {
            front.push_back(val);
            back.push_back(val);
            for(int i = 0; i < freq-2; i++) mid.push_back(val);

        }
    }
    reverse(back.begin(), back.end());
    vector<ll>res;
    res.insert(res.end(), front.begin(), front.end());
    res.insert(res.end(), mid.begin(), mid.end());
    res.insert(res.end(), back.begin(), back.end());

    cout << front.size() + back.size() << endl;
    for(ll x:res) cout << x << " ";
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