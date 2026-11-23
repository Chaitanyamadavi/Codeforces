#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(2*n);
    for(int &x : a) cin >> x;

    sort(a.begin(), a.end());
    int ans = INT_MAX;
    int m = 2*n;
    for(int i = 0; i< m; i++)
    {
        for(int j = i+1; j< m; j++)
        {
            vector<int>v;
            for(int k = 0; k < m; k++)
            {
                if(k != i && k != j) v.push_back(a[k]);
            }
            int sum = 0;
            for(int k = 0; k < v.size(); k+=2)
            {
                sum += v[k+1] - v[k];
            }
            ans = min(ans,sum);
        }
    }
    cout << ans << endl;

    return 0;
}