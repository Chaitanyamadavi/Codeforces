#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    string s;
    cin >> n >> s;

    unordered_map<char,int>mp;
    for(int i = 1;i < n-1; i++) mp[s[i]]++;
   
    bool found = false;
    for(auto &[c, freq]:mp)
    {
        if(freq == 1)
        {
            found = true;
            break;
        }
    }
    set<char>st;
    for(char ch: s) st.insert(ch);
    if(found) cout << st.size() -1 << '\n';
    else cout << st.size() << '\n';
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