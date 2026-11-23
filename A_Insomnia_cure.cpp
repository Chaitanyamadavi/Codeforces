#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    vector<int>a(d);
    iota(a.begin(), a.end(), 1);
    
    for(int i = k - 1; i< d; i += k) a[i] = -1;
    for(int i = l-1; i < d; i += l) a[i] = -1;
    for(int i = m-1; i < d; i += m) a[i] = -1;
    for(int i = n-1; i < d; i += n) a[i] = -1;

    int ans = 0;
    for(int x:a) if(x == -1) ans++;
    cout << ans << '\n';


    return 0;
}