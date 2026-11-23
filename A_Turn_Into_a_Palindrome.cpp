#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    if(n&1)
    {
        int mid = n/2;
        int val1 = 0;
        int i = 1;
        int temp = mid;
        while(temp > 0)
        {   
            if(s[mid-i] == s[mid+i]) i++;
            else if((s[mid - i] != s[mid+i]) && (s[mid-i] != c && s[mid+i] != c))
            {
                val1+= 2;
                i++;
            }
            else if((s[mid-i] == c && s[mid+i] != c) || (s[mid-i] != c && s[mid+i] == c))
            {
                val1++;
                i++;
            }
            temp--;
        }
        cout << val1 << '\n';
       
    }
    else
    {
        int midl = (n/2)- 1, midh = (n/2);
        int j = 0;
        int val2 = 0;
        int temp = midl;
        while(temp >= 0 )
        {
            if(s[midl - j] == s[midh + j]) j++;
            else if((s[midl- j] != s[midh+j]) && (s[midl-j] != c && s[midh+j]!= c))
            {
                val2+= 2;
                j++;
            }
            else if((s[midl-j] == c && s[midh +j] != c) || (s[midl-j] != c && s[midh+j] == c))
            {
                val2++;
                j++;
            }
            temp--;
        }
        cout << val2 << '\n';
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