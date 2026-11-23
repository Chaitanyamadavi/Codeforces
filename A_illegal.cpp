#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();
    cout << (n%5 == 0 ? "Yes" : "No") << endl; 

    return 0;
}