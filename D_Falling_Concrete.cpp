#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n),b(n);
    for(int i = 0; i< n; i++)
    {
        cin >> a[i];
        b[i] = a[i] - (i+1);
    }
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    int ans = 1;
    int curr = 1;
    for(int i = 1; i< n; i++)
    {
        if(b[i] == b[i-1]+1) curr++;
        else curr = 1;
        ans = max(ans, curr);
    }
    cout << ans << endl;

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