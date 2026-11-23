#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<ll,ll>>a(n);
    for(int i = 0; i< n; i++)
    {   
        cin >> a[i].first >> a[i].second;
    } 
    sort(a.begin(), a.end(), [](auto a, auto b){
        return a.second < b.second;
    });

    int count = 0;
    ll last = 0;
    for(int i = 0; i< n; i++)
    {
        if(a[i].first >= last)
        {
            count++;
            last = a[i].second;
        }
    }
    cout << count << endl;

    return 0;
}