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
    for(int i = n-2; i>= 0; i--)
    {
        while(a[i] >= a[i+1] && a[i] >0)
        {
            a[i] /= 2;
            cnt++;
        }
        if(a[i] == a[i+1])
        {
            cout << -1 << endl;
            return;
        }
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