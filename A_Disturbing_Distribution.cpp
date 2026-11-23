#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    
    int sum = 0, val = 1;
    for(int i = 0; i< n; i++)
    {   
        if(n <= 3) val *= a[i];
        else if(a[i] != 1) sum += a[i]; 
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