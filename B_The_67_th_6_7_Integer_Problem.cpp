#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n = 7;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    int ans = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i<6; i++)
    {
        ans -= a[i];
    }
    cout << ans + a[n-1] << endl;
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