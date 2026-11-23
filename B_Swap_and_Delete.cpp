#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    string s;
    cin >> s;
    int n = s.length();
    if(n == 1)
    {
        cout << n << endl;
        return;
    }
    int cnt1 = 0, cnt0 = 0;
    for(char ch : s) 
    {
        if(ch == '1') cnt1++;
        else cnt0++;
    }
    
    string res = "";
    for(int i = 0; i< n; i++)
    {
        if(s[i] == '0' && cnt1 > 0) 
        {
            res += '1';
            cnt1--;
        }
        else if( s[i] == '1' && cnt0 > 0 ) 
        {
            res += '0';
            cnt0--;
        }
        else break;
    }
    cout << n - res.length() << endl;

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