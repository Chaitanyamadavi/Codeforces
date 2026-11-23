#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    string s;
    cin >> n >> s;

    int cnt1 = 0, cnt0 = 0;
    int len1 = 0, len0 = 0;
    char ex0 = '0', ex1 = '1';

    for(char ch: s)
    {
        if(ch == '0') cnt0++;
        else cnt1++;
        if(ch == ex0)
        {
            len0++;
            ex0 ^= 1;
        }
        if(ch == ex1)
        {
            len1++;
            ex1^= 1;
        }
    }
    int diff = cnt0 - cnt1;
    if(abs(diff) > 2)
    {
        cout << -1 << endl;
        return;
    }
    int max_val = -1;
    if(abs(diff) <= 1)
    {
        max_val = max({max_val, len0- (len0%2),len1 - (len1%2) });
    }
    if(diff>= 0 && diff <= 2 && len0 > 0)
    {
        max_val = max({max_val, len0 -(1- len0%2)});
    }
    if(diff >= -2 && diff <= 0 && len1 > 0)
    {
       max_val = max({max_val, len1 - (1- len1%2)}); 
    }

    cout << (max_val == -1 ? -1 : n- max_val) << endl;
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