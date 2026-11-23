#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for(int &x:a) cin >> x;
    for(int &x:b) cin >> x;

    int cnt = 0;
    int ans = 0;
    for(int i = 0; i< n; i++)
    {
        if(a[i] == b[i])
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else cnt = 0;
    }
    cout << ans << '\n';
    return 0;
}