#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int get_mex(const vector<int>& a, int l, int r) 
{
    int len = r - l + 1;
    vector<int> present(len + 1, 0);
    for (int i = l; i <= r; i++) 
    {
        if (a[i] <= len) present[a[i]] = 1;
    }
    int m = 0;
    while (m <= len && present[m]) m++;
    return m;
}

void solve() {
    int n;
    cin >> n;
    int s = n+ n;
    vector<int> a(s);
    int z1 = -1, z2 = -1;

    for (int i = 0; i < s; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            if (z1 == -1) z1 = i;
            else z2 = i;
        }
    }

    int max_mex = 1;
    for (int i = 0; i < s; i++) {
        int l = i, r = i;
        while (l > 0 && r < s - 1 && a[l - 1] == a[r + 1]) 
        {
            l--; r++;
        }
        if ((l <= z1 && z1 <= r) || (l <= z2 && z2 <= r)) max_mex = max(max_mex, get_mex(a, l, r));
        
        if (i < s - 1 && a[i] == a[i + 1]) 
        {
            l = i; r = i + 1;
            while (l > 0 && r < s - 1 && a[l - 1] == a[r + 1]) 
            {
                l--; r++;
            }
            if ((l <= z1 && z1 <= r) || (l <= z2 && z2 <= r)) 
            {
                max_mex = max(max_mex, get_mex(a, l, r));
            }
        }
    }
    cout << max_mex << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}