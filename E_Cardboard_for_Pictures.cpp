#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    ll c;
    cin >> n >> c;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    ll low = 1, high = 1e9;
    while(low <= high)
    {
        ll w = low + (high - low)/2;
        __int128_t sum = 0;

        for(int i = 0; i< n; i++)
        {
            __int128_t side = a[i] + 2*w;
            sum += side * side;
        }
        if(sum == c) 
        {
            cout << w << "\n";
            return;
        }
        else if(sum < c)
        {
            low = w+1;
        }
        else high = w-1;

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