#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int a ,b,c,d;
    cin >> a >> b >> c >> d;

    int x = max(a,b);
    int y = max(c,b);
    int z = min(c,d);

    cout << x << " " << y << " " << z << endl;

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