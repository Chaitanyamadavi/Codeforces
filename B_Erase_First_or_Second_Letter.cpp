#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    string s;
    cin >> n ;
    cin >> s;

    int cnt = 0;
    for(int i = 1;i < n; i++)
    {
        if(s[i] == s[0]) cnt++;
    }
    cout << 2*n - 2 - cnt << endl;

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