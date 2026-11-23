#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i< n; i+= k)
    {   
        bool found = false;
        for(int j = i; j< i+k; j++)
        {
            if(s[j] == '0')
            {   
                found = true;
                break;
            }
        }
        if(!found) cnt++;
    }
    cout << cnt << '\n';
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