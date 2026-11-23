#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(int x)
{   

    for(int i = 2; i * i <= x; i++)
    {
        if(x%i == 0) return false;
    }
    return true;
}

void solve()
{   
    int n;
    cin >> n;
    if(isPrime(n+1) == true) cout << "YES\n";
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