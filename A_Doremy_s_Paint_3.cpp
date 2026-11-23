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

    if(mp.size() >= 3)
    {
        cout << "No\n";
    }
    else
    {
        int val1 = mp.begin()->second;
        int val2 = mp.rbegin()->second;

        if(val1 == val2 ) cout << "Yes\n";
        else if(n%2 == 1 && abs(val1 - val2) == 1) cout << "Yes\n";
        else cout << "No\n";  
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