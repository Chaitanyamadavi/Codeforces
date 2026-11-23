#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int p,q;
    cin >> p >> q;
    ll s = p + (q*2);
    
    for(ll n = 1; n*n <= s; n++)
    {
        if((s-n)%(2*n+1) == 0)
        {
            ll m = (s-n)/(2*n+1);
            if(m > 0)
            {
                cout << n << " " << m << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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