#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(3);
    for(int &x:a) cin >> x;

    int ans = n - *min_element(a.begin(), a.end());
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