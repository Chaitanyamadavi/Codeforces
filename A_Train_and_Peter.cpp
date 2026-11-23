#include <bits/stdc++.h>
using namespace std;

bool check(string s, string a, string b)
{
    int p = s.find(a);
    if(p == string::npos) return false;
    int q = s.find(b, p + a.size());
    return q != string::npos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,a,b;
    cin >> s >> a >> b;

    bool f = check(s,a,b);
    reverse(s.begin(), s.end());
    bool r = check(s,a,b);
    
    if(f && r) cout << "both\n";
    else if(f) cout << "forward\n";
    else if(r) cout << "backward\n";
    else cout << "fantasy\n";

    return 0;
}