#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,x,y;
    cin >> n >> x >> y;
    vector<int>a(n+1);
    for(int i = 1; i<= n; i++)
    {
        cin >> a[i];
    }

    int val = gcd(x,y);
    bool found = true;
    for(int i =1 ; i<= n; i++)
    {
        if(i%val != a[i]%val)
        {
            found = false;
            break;
        }
    }
    cout << (found ? "YES\n": "NO\n");

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