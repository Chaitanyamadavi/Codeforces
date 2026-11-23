#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    
    int idx = -1, idx2 = -1;
    for(int i = 0; i< n ; i++)
    {
        if(a[i] == 1) 
        {
            idx = i;
            break;
        }
    }
    for(int i =n -1 ; i>=0; i--) 
    {
        if(a[i] == 1)
        {
            idx2= i+1;
            break;
        }
    }
    int val = idx2 - idx;
    cout << (val <= x ? "YES\n": "NO\n");
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