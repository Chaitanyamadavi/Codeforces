#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,w;
    cin >> n >> w;
    vector<pair<ll,ll>>v(n);
    for(int i = 0; i< n; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    sort(v.rbegin(), v.rend());
    ll ans = 0;
    int i = 0;
    while(w > 0 && i < n)
    {   
        if(w == 0) break;
        if(v[i].second > 0)
        {
            ans += v[i].first;
            v[i].second--;
            w--;
        }
        else i++;
    }
    cout << ans << endl;

    return 0;
}