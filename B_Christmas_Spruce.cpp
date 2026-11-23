#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>a[n+1];
    for(int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        a[x].push_back(i+1);
    } 

    for(int i = 1; i<= n; i++)
    {
        if(a[i].size() == 0) continue;
        int cnt = 0;
        for(int x : a[i])
        {
            if(a[x].size() == 0) cnt++;
        }
        if(cnt < 3)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";

    return 0;
}