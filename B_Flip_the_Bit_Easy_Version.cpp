#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    int p;
    cin >> p;
    int x = a[p-1];

    int left = 0;
    bool ok = false;
    for(int i = p-2; i>=0; i--)
    {
        if(a[i] != x)
        {
            if(!ok) 
            {
                left++;
                ok = true;
            }
        }
        else
        {
            ok = false;
        }
    }
    int right = 0;
    ok = false;
    for(int i = p; i<n; i++)
    {
        if(a[i] != x)
        {
            if(!ok)
            {
                right++;
                ok = true;
            }
        }
        else
        {
            ok = false;
        }
    }
    int ans = max(left,right)*2;
    if(ans%2 != 0) cout << ans+1 << endl;
    else cout << ans << endl;

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