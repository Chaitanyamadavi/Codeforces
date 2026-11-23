#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<string,int>>a;
    map<string,int>mp;
    
    for(int i = 0; i< n; i++)
    {
        string name;
        int x;

        cin >> name >> x;
        a.push_back({name,x});
        mp[name] += x;
    }

    int val = INT_MIN;
    for(auto &[str, freq]:mp)  val = max(val, freq);
    
    map<string,int>c;
    for(auto &[str, freq]:a)
    {
        c[str] += freq;
        if(c[str] >= val && mp[str] == val)
        {
            cout << str << endl;
            break;
        }
    }

    return 0;
}