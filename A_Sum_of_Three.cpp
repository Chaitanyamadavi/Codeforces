#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    ll n;
    cin >> n;
    for(int i = 1; i<= 20; i++)
    {
        for(int j = 1; j<=20; j++)
        {
            if(i+j >= n || i == j) continue;
            ll m = n - i - j;
            if(m == i || m == j) continue;
            if(i%3 == 0 || j%3 == 0 || m%3 == 0) continue;
            cout << "YES\n";
            cout << i << " " << j << " " << m << endl;
            return;
        }
    }
    cout << "NO\n";
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