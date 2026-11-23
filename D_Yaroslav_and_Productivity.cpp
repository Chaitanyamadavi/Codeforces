#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n, m;
    cin >> n >> m;
    vector<ll>a(n+1);
    for(int i=1;i<= n; i++) 
    {
        cin >> a[i];
    }
    vector<bool>post(n+1,false);
    for(int i=0;i<m; i++) {
        int x;
        cin >> x;
        post[x] = true;
    }
    vector<vector<ll>>dp(n+1,vector<ll>(2, 0));
    for(int i = 1; i <= n; i++)
    {
        ll normal = a[i];
        ll flipped = -a[i];
        if(!post[i]) 
        {
            dp[i][0] = dp[i-1][0] +normal;
            dp[i][1] = dp[i-1][1] +flipped;
        }
        else 
        {
            dp[i][0] = max(dp[i-1][0] + normal, dp[i-1][1]+flipped);
            dp[i][1] = max(dp[i-1][1] + flipped, dp[i-1][0]+normal);
        }
    }
    cout << dp[n][0] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {   
        solve();
    }
    return 0;
}