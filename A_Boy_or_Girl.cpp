#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    set<char>st;
    for(char ch: s) st.insert(ch);
    
    int n = st.size();
    if(n&1) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";

    return 0;
}