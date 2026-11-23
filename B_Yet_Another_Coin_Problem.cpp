#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int final(int n)
{
    int ans = 0;
    ans += n/15;
    n %= 15;
    ans += n/6;
    n %= 6;
    ans += n/3;
    n %= 3;
    ans += n;
    return ans;

}
void solve()
{   
    ll n;
    cin >> n;
    if(n < 10)
    {
        cout << final(n) << endl;
    }
    else if( n < 20)
    {
        cout << min(final(n), final(n-10)+1) << endl;
    }
    else 
    {
        cout << min({final(n), final(n-10)+1, final(n-20)+2}) << endl;
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