#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    int m = a[k-1];
    int cnt = 0;
    for(int i = 0; i< n; i++)
    {
        if(a[i] > 0 && a[i] >= m) cnt++;
    }
    cout << cnt << endl;
    return 0;
}