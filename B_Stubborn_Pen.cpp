#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    if(s[0] == 'B') cnt++;
    for(int i = 1; i< n; i++)
    {
        if(s[i-1] == s[i]) cnt++;
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