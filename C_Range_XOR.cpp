#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    vector<ll>pref(n);
    pref[0] = a[0];
    for(int i = 1; i< n; i++)
    {
        pref[i] = pref[i-1] ^ a[i];
    }
    while(k--)
    {
        int l,r;
        cin >> l >> r;
        int ans = pref[r-1] ^ (l > 1 ? pref[l-2]:0);
        cout << ans << endl;
    }
     

    return 0;
}