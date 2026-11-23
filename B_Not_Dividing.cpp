#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    for(int i = 0; i< n; i++) 
    {
        if(a[i] == 1) a[i] += 1;
    }
    vector<ll>p;
    p.push_back(a[0]);

    for(int i = 0; i< n-1; i++)
    {
        if((a[i+1]%a[i]) == 0) 
        {
            p.push_back(a[i+1]+1);
            a[i+1] += 1;
        }
        else p.push_back(a[i+1]);
    }
    for(ll x:p) cout << x << " ";
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