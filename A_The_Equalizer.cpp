#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    int sum = 0;
    for(int x:a) sum += x;
    if(sum % 2 == 0 && (n*k)%2 != 0) 
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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