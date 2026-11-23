#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int ans = 0;
    int temp = n;
    while(temp--) ans += a;
    ans = min(ans,((n/m) * b + min((n%m) *a, b)));
    cout << ans << endl;
    return 0;
}
