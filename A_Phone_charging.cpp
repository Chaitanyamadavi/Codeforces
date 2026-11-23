#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int x,a,b;
    cin >> x >> a >> b;
    if(x == 100)
    {
        cout << 0 << endl;
        return;
    }
    int temp = 0;
    int l = 80 - x;
    int r = 20;
    if(l < 0)
    {
        r = 20 + l;
        l = 0;
    }
    int ans = (l * a) + (r*b);
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