#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    int cnt1 = 0, cnt2 = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i< n-1; i++)
    {
        if((a[0]+a[n-i-1])%2 != 0) cnt1++;
        else break;
    }
    for(int i = 0; i< n-1; i++)
    {
        if((a[i]+a[n-1])%2 != 0) cnt2++;
        else break;
    }
    cout << min(cnt1,cnt2) << endl;
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