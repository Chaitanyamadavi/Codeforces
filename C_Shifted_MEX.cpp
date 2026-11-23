#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int m = a.size();
    int mex = 0;
    int cnt = 0;
    for(int i = 0; i< m; i++)
    {
        if(i == 0 || a[i] == a[i-1] +1) cnt++;
        else  
        {
            mex = max(mex, cnt);
            cnt = 1;
        }
    }
    mex = max(mex, cnt);
    cout << mex << endl;
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