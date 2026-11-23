#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,m;
    cin >> n >> m;
    string a,b;
    cin >> a >> b;

    int cnt = 0;
    string res = a;
    for(int i = 0; i<= 6; i++)
    {    

        if(res.find(b) != string::npos)
        {
            cout << cnt << "\n";
            return;
        }
        res += res;
        cnt++;
    }
    cout << -1 << '\n';
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