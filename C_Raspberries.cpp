#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    if(k == 2 || k == 3 || k == 5)
    {
        int ans = INT_MAX;
        for(int x:a)
        {
            int val = (k - x%k )%k;
            ans = min(ans, val);
        }
        cout << ans << endl;
    }
    else{
        int ans = INT_MAX;
        for(int x:a)
        {
            int val = (4-x%4)%4;
            ans = min(ans, val);
        }
        int cnt = 0;
        for(int x:a)
        {
            if(x%2 == 0) cnt++;
        }
        int temp = max(0, 2- cnt);
        ans = min(ans, temp);
        cout << ans << endl;
    }
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