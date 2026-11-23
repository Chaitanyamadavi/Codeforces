#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    ll k;
    cin >> k;
    vector<ll>a(n),b(m);
    for(ll &x:a) cin >> x;
    for(ll &x:b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, ans = 0;
    while(i < n && j < m)
    {
        if(b[j] < a[i] - k) j++;
        else if(b[j] > a[i] + k) i++;
        else 
        {   
            ans++;
            i++;
            j++;
        }
    }
    cout << ans << endl;

    return 0;
}