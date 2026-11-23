#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    vector<bool>used(n, false);

    int cnt = 0;
    for(int i = 0; i< n; i++)
    {
        if(used[i] == true) break;
        cnt++;
        used[i] = true;
    }
    cout << cnt << endl;
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