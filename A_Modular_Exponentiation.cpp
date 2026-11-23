#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin >> n >> m;
    if(n >= 63) cout << m << endl;
    else cout << m % (1LL << n) << endl;

    return 0;
}