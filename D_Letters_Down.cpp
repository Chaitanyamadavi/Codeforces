#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    while(true)
    {
        char val = 'a';
        for(int i = 0; i< n/2; i++)
        {
            if(s[i] != s[n-i-1])
            {
                val = max(val, max(s[i], s[n-i-1]));
            }
        }
        if(val == 'a') break;
        for(int i = 0; i< n; i++)
        {
            if(s[i] == val) s[i]--;
        }
        cnt++;
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