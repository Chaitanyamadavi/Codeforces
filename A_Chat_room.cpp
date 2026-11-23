#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string res = "hello";
    int j = 0;
    for(char ch: s)
    {
        if( j < 5 && ch == res[j]) j++;
    }

    cout << (j == 5 ? "YES\n" : "NO\n");
    return 0;
}