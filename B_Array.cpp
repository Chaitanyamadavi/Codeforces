#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    for(int i = 0; i< n; i++)
    {   
        int cnt = 0;
        for(int j = i+1; j < n; j++)
        {
            if(a[i] > a[j]) cnt++;
        }
        cout << cnt << " ";
    }
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