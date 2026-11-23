#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<string>p;
    sort(s.begin(), s.end());
    do{
        p.push_back(s);
    }while (next_permutation(s.begin(), s.end()));
    cout << p.size() << "\n";
    for(auto s: p) cout << s << "\n";
    return 0;
}