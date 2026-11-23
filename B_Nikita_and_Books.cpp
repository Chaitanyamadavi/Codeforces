#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    bool found = true;
    for(int i = 0; i< n; i++)
    {
        if(a[i] < i+1)
        {
            found = false;
            break;
        }
        if(i < n-1)
        {
            ll ext = a[i] - (i+1);
            a[i+1] += ext;
        }
    }
    cout << (found ? "YES\n": "NO\n");
    
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