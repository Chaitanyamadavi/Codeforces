#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    multiset<int>a;
    vector<ll>b(m);
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for(ll &x:b) cin >> x;

    int j = 0;
    while(m--)
    {
        auto it = a.upper_bound(b[j]);
        if(it == a.begin()) 
        {
            cout << -1 << endl;
        }
        else
        {
            it--;
            cout << *it << endl;
            a.erase(it); 
        }
        j++;
    }

    return 0;
}