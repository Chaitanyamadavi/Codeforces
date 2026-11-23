#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a;
    int l= 1, r = 3*n;
    for(int i = 0; i< n; i++)
    {
        a.push_back(l);
        a.push_back(r-1);
        a.push_back(r);
        r -= 2;
        l += 1;
    }   
    for(int x:a) cout << x << " ";
    cout << endl;
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