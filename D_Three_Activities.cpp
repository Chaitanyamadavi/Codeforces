#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int>findPair(vector<int>&arr)
{
    vector<pair<int,int>>v(arr.size());
    for(int i = 0; i< v.size(); i++)
    {
        v[i].first = arr[i];
        v[i].second = i;
    }
    sort(v.rbegin(), v.rend());
    vector<int>ans(3);
    for(int i = 0; i< 3; i++) ans[i] = v[i].second;
    return ans;
}
void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n), b(n), c(n);
    for(int &x:a) cin >> x;
    for(int &x:b) cin >> x;
    for(int &x:c) cin >> x;

    vector<int>ind1 = findPair(a);
    vector<int>ind2 = findPair(b);
    vector<int>ind3 = findPair(c);

    int res = 0;
    for(int i = 0; i< 3; i++)
    {
        for(int j = 0; j< 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                int x = ind1[i], y = ind2[j], z = ind3[k];
                if((x==y) || (y==z) ||(z == x)) continue;
                res = max(res, a[x]+b[y]+c[z]);
            }
        }
    }
    cout << res <<  '\n';
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