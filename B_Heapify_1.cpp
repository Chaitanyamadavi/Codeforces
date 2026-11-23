#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n+1);
    a[0] = 0;
    for(int i = 1; i< n+1; i++) cin >> a[i];

    for(int i = 1; i<=n; i+=2)
    {
        for(int j = i; j<= n; j*=2)
        {
            for(int k = i*2; k<=n; k*=2)
            {
                if(a[k/2] > a[k]) swap(a[k/2],a[k]);
            }
        }
    }
    if(is_sorted(a.begin(), a.end())) cout << "YES\n";
    else cout << "NO\n";
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