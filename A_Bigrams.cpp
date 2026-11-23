#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int k;
    cin >> k;
    vector<int>a(k);
    for(int &x:a) cin >> x;

    bool found = false;
    int cnt = 0;
    for(int i = 0; i < k; i++)
    {   
        if(a[i] >= 3)
        {
            found = true;
            break;
        }
        if(a[i] == 2) 
        {
            cnt++;
            if(cnt > 1) 
            {
                found = true;
                break;
            }
        }
    }
    cout << (found ? "YES\n": "NO\n") ;
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