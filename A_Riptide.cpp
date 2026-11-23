#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int a,b,c;
    cin >> a >> b >> c;

    if(a== b || b == c || a == c)
    {
        cout << 0 << '\n';
        return;
    }
    vector<int>v = {a,b,c};
    sort(v.begin(), v.end());
    int mid = v[1];
    int max_val = v[2];
    int min_val = v[0];
    int ans = min(abs(mid-max_val), abs(mid-min_val));
    cout << ans << '\n';

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