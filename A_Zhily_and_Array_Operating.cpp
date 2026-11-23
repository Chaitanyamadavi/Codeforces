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
        cin >> a[i];
    }

    vector<ll>b= a;
    for(int i = 0; i< n-1; i++)
    {
        if(b[i] <= 0)
        {
            b[i] += b[i+1];
        }
    }
    int cnt = 0;
    for(ll x:b) if(x > 0) cnt++;
    cout << cnt << "\n";
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