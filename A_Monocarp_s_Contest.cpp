#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    int cz = 0, co = 0;
    for(int x:a) 
    {
        if( x == 1) co++;
        else cz++;
    }

    if(cz < 2) 
    {
        cout << -1 << '\n';
        return;
    }
    else{
        if(a[0] == 0 && a[n-1] == 0) cout << 0 << endl;
        else if((a[0] == 0 && a[n-1] == 1) || (a[0] == 1 && a[n-1] == 0)) cout << 1 << endl;
        else if(a[0] == 1 && a[n-1] == 1)cout << 2 << endl;
    }
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