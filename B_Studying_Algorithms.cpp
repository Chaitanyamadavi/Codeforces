#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    
    sort(a.begin(), a.end());
    int cnt = 0;
    for(int x:a)
    {
        if(m >= x)
        {
            m -= x;
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}