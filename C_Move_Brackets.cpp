#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    int val = 0;
    for(char ch: s)
    {
        if(ch == '(') val++;
        else val--;
        if(val < 0)
        {
            cnt++;
            val = 0;
        }
    }
    cout << cnt << endl;
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