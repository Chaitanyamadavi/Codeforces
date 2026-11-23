#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int a,b,n;
    cin >> n >> a >> b;
    if(n == a && a == b) cout << "Yes\n";
    else if(a+b+2 <= n) cout << "Yes\n";
    else cout << "No\n";

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