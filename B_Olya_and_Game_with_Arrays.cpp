#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define  all(v) v.begin(), v.end()
void solve()
{   
    int n;
    cin >> n;
    int val = INT_MAX;
    vector<ll>a;
    while(n--)
    {
        int m;
        cin >> m;
        vector<ll>v(m);
        for(ll &x:v) cin >> x;

        int min_val = *min_element(all(v));
        val = min(val, min_val);
        v.erase(find(all(v), min_val));
        a.push_back(*min_element(all(v)));
    }
    cout << val + (ll)accumulate(all(a),0ll) - *min_element(all(a)) << '\n';
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