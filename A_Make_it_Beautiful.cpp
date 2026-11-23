#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;

    vector<int>res;
    int max_val = *max_element(a.begin(), a.end());
    int min_val = *min_element(a.begin(), a.end());
    if(max_val == min_val)
    {
        cout << "NO\n";
        return;
    }

    sort(a.begin(), a.end());
    res.push_back(max_val);
    res.push_back(min_val);
    a.pop_back();
    a.erase(a.begin());
    for(int x:a) res.push_back(x);
    cout << "YES\n";
    for(int x: res) cout << x << " ";
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