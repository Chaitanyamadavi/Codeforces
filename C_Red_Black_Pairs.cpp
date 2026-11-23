#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    string r,l;
    cin >> r >> l;

    vector<int>dp(n+1,1e9);
    dp[0] = 0;
    for(int i = 0; i< n; i++)
    {
        int a = (r[i] == l[i] ? 0:1 );
        if(dp[i] != 1e9)
        {
            dp[i+1] = min(dp[i+1], dp[i]+a);
        }
        if(i+1 < n)
        {
            int b = (r[i] == r[i+1] ? 0:1) + (l[i] == l[i+1]? 0:1);
            if(dp[i] != 1e9)
            {
                dp[i+2] = min(dp[i+2], dp[i] + b);
            }
        }
    }
    cout << dp[n] << endl;
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