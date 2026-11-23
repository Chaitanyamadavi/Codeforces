#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x;
    cin >> n >> x;
    vector<pair<ll,ll>>a(n);
    for(int i = 0; i< n; i++)
    {
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());
    ll l = 0, r = n-1;

    while(l < r)
    {
        ll sum = a[l].first + a[r].first;
        if(sum == x)
        {
            cout << a[l].second << " " << a[r].second << endl;
            return 0;
        }
        if(sum < x) l++;
        else r--;
    }
    cout << "IMPOSSIBLE\n";
     
    return 0;
}