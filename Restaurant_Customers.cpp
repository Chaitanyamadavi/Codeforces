#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    vector<pair<int,int>>a;
    for(int i = 0; i< n; i++)
    {
        int x,y;
        cin >> x >> y;
        a.push_back({x,1});
        a.push_back({y,-1});
    }
    int cnt = 0, ans = 0;
    sort(a.begin(), a.end());
    
    for(auto &[time, type]:a)
    {
        cnt += type;
        ans = max(ans, cnt);
    }
    cout << ans << '\n';

    return 0;
}