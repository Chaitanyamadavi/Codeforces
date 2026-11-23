#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>a(n);
    vector<ll> pref(n);
    for(int &x:a) cin >> x;
    
    pref[0] = a[0];
    for(int i = 1; i< n; i++)
    {
        pref[i] = pref[i-1] + a[i];
    }

    for(ll x:pref) cout << x <<  " ";
    cout << endl;
    return 0;
}