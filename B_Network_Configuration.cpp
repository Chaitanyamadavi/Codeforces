#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    
    map<int,int,greater<int>>mp;
    for(int &x:a) mp[x]++;
    int cnt = 0;
    for(auto &[val,freq]:mp)
    {
        cnt += freq;
        if(cnt >= k) 
        {
            cout << val << endl;
            break;
        }
    }

    return 0;
}