#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<int>a(m);
    for(int &x:a) cin >> x;

    ll cnt = 0;
    for(int i = 0; i< m-1; i++)
    {
        if(a[i] <= a[i+1]) 
        {
            cnt += a[i+1] - a[i];
        }
        else
        {
            cnt += n + a[i+1] - a[i];
        }
    }
    cout << cnt + abs(a[0] - 1) << endl;

    return 0;
}