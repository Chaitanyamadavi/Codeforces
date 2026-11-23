#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    bool one = false, ss = false;
    for(int i = 0; i< n; i++)
    {   
        cin >> a[i];
        if(a[i] == 1) one = true;
        if(a[i] == 67) ss = true;
    }

    if((one && ss) || ss) cout << "YES\n";
    else cout << "NO\n";


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