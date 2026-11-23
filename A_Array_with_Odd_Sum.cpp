#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    int sum = 0;
    for(int &x:a)
    {
        cin >> x;
        sum += x;
    }
    if(sum %2 != 0) 
    {
        cout << "YES\n";
        return;
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