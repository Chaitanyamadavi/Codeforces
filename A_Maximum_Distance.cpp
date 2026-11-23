#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll>a(n), b(n);
    for(ll &x:a) cin >> x;
    for(ll &x:b) cin >> x;
    
    ll val = 0;
    ll temp = 0;
    for(int i = 0; i< n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            ll temp = (a[i] - a[j])*(a[i] - a[j]) + (b[i]- b[j])*(b[i]- b[j]);
            val = max(val, temp);
        }
    }
    cout << val << endl;
    return 0;
}