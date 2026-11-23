#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, c, d, p, nl, np ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int vol = (k*l)/(n*nl);
    int slc = (c*d)/n;
    int salt = p /(np * n);
    int ans = min({vol, slc, salt});
    cout << ans<< endl;
    
    return 0;
}