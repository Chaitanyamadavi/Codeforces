#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    int ans = 0, curr = 1;
    for(int i = 1; i<= n-k; i++)
    {   
        ans += (1LL<< curr);
        curr++;
    }
    int temp = k;
    while(temp--) ans += 2;
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