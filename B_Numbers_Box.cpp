#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,m;
    cin >> n >> m;
    int cnt = 0;
    int sum = 0;
    int val = INT_MAX;
    vector<vector<int>>a(n, vector<int>(m));
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] < 0) cnt++;
            sum += abs(a[i][j]);
            val = min(val, abs(a[i][j]));
        }
    }
    if(cnt%2 != 0) cout << sum - 2*val << endl;
    else cout << sum << endl;
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