#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll x; 
    cin >> n >> x;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    sort(a.begin(), a.end());
    int ans = 0;
    int i = 0, j = n-1;
    while(i <= j)
    {
        if(a[i] + a[j] > x)
        {
            j--;
        }
        else if(a[i] + a[j] <= x)
        {
            i++;
            j--;
        }
        ans++;
    }
    cout << ans << '\n';
    return 0;
}