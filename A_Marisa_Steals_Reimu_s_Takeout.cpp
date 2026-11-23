#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0) cnt0++;
        else if(a[i] == 1) cnt1++;
        else cnt2++;
    }

    int p = min(cnt1 , cnt2);
    cnt1 -= p;
    cnt2 -= p;
    int ans = cnt0 + p + cnt1/3 + cnt2/3;
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