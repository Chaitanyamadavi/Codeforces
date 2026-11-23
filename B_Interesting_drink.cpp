#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    sort(a.begin(), a.end());
    int m;
    cin >> m;
    while(m--)
    {   
        int j;
        cin >> j;
        cout << upper_bound(a.begin(), a.end(), j) - a.begin() << endl;
    }
    return 0;
}