#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    stack<int>st;
    vector<int>a;

    for(int i = 0; i< s.size(); i++)
    {
        if(s[i] == '(') st.push(i);
        else if(!st.empty())
        {
            a.push_back(st.top());
            a.push_back(i);
            st.pop();
        }
    }
    sort(a.begin(), a.end());
    string res = "";
    for(auto x:a) res += s[x];

    cout << res.size() << '\n';    
    cout << res << '\n';

    return 0;
}