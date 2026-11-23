#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    int ans = 0;
    vector<pair<int,int>>v(m);
    for(int i = 0; i < m; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end(), [](pair<int,int>a, pair<int,int>b){
        return a.second > b.second;
    });
    
    int j = n;
    for(int i = 0; i < m ; i++)
    {   
        if(j == 0) break;
        int val = min(j,v[i].first);
        ans += val* v[i].second;
        j -= val;
    }
    cout << ans << endl;

    return 0;
}