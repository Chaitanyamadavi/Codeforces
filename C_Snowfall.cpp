#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<ll>a(n),two,three, six, none;
    for(ll &x:a) cin >> x;

    for(int i = 0; i< n; i++)
    {
        bool d2 = (a[i]%2 == 0);
        bool d3 = (a[i]%3 == 0);

        if(d2 && d3) six.push_back(a[i]);
        else if(d2) two.push_back(a[i]);
        else if(d3) three.push_back(a[i]);
        else none.push_back(a[i]);
    }
    for(auto x:six) cout << x << " ";
    for(auto x: two) cout << x << " ";
    for(auto x: none) cout << x << " ";
    for(auto x: three) 
    {
        cout << x << (&x == &three.back() ? "": " ");
    }
    cout << endl;
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