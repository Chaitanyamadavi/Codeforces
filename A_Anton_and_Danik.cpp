#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = count(s.begin(),s.end(), 'A');
    int d = count(s.begin(), s.end(), 'D');
    if(a > d) cout << "Anton\n";
    else if(a < d) cout << "Danik\n";
    else cout << "Friendship\n"; 

    return 0;
}