#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,b,c,x,y;
    cin >> n >> a >> b >> c >> x >> y;
    vector<pair<int,int>>v(n);
    for(int i = 0; i< n; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    } 

    int ans = 0;
    for(int i = 0; i< n ; i++)
    {
        int val = (v[i].second - v[i].first) * a;
        ans += val;
    }
    for(int i = 1; i < n; i++)
    {
        int diff = v[i].first - v[i-1].second;
        ans += min(diff, x) * a;

        if(diff > x) ans += min(diff - x, y)*b;
        if(diff > x+y) ans += (diff-x-y)*c;
    }
    cout << ans << '\n';

    return 0;
}