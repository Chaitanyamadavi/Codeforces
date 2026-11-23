#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<int>a(m);
    for(int &x:a) cin >> x;

    sort(a.begin(), a.end());
    int ans = INT_MAX;
    int j = n-1;
    for(int i = 0; i <= m-n; i++)
    {
        ans = min(ans, a[i+j] - a[i]);
    }
    cout << ans << endl;

    return 0;
}