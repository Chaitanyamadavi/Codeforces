#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    int cnt = 0;
    for(int i = 1; i< n; i++)
    {   
        int l = a[i-1]%2;
        if(a[i]%2 == l) cnt++;
    }
    cout << cnt << endl;
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