#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    
    vector<int>v;
    sort(a.begin(), a.end());
    int i = 0, j = 1;
    while( j <= 2*n && i < n)
    {
        if(a[i] != j) 
        {
            v.push_back(j);
        }
        else 
        {
            i++;
        }
        j++;
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] > a[i]) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
