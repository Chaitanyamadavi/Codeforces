#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    int val = count(a.begin(), a.end(), k);
    cout << (val > 0 ? "YES\n": "NO\n");
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