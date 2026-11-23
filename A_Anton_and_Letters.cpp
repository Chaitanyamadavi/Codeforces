#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin,s);
    set<char>st;
    for(auto &x: s)
    {
        if(x >= 'a' && x <= 'z') st.insert(x);
    } 
    cout << st.size() << endl;

    return 0;
}