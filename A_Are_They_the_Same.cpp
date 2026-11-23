#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    vector<int>a(n), b(n);
    int odd1 = 0, odd2 = 0;
    for(int &x:a)
    {
        cin >> x;
        if(x&1) odd1++;
    }
    for(int &x:b) 
    {
        cin >> x;
        if(x&1) odd2++; 
    }

    if(k%2 == 0)
    {
        if(odd1 >= odd2) cout << "YES\n";
        else cout << "NO\n";
    }
    else
    {
        if(odd1 <= odd2) cout << "YES\n";
        else cout << "NO\n";
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