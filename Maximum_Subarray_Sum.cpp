#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    ll curr = a[0], ans = a[0];
    for(int i = 1; i< n; i++)
    {
        curr = max(a[i], curr+ a[i]);
        ans = max(ans, curr);
    }
    cout << ans << endl;
    
    return 0;
}