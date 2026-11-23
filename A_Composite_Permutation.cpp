
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    if(n <= 3)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> res(n);
    if(n & 1)
    {
        res[0] = 4;
        res[1] = 3;
        res[2] = 5;
        res[3] = 1;
        res[4] = 2;
        for(int i = 5; i + 1 < n; i += 2)
        {
            res[i] = i + 2;
            res[i + 1] = i + 1;
        }
    }
    else
    {
        res[0] = 4;
        res[1] = 3;
        res[2] = 2;
        res[3] = 1;

        for(int i = 4; i + 1 < n; i += 2)
        {
            res[i] = i + 2;
            res[i + 1] = i + 1;
        }
    }

    for(int x : res)
        cout << x << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}
