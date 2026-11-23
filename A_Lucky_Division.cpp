#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int val = n;
    if(val % 4 == 0 || val % 7 == 0 || val % 47 == 0 || val % 74 == 0|| val % 44 == 0|| val %77 == 0 || val % 444 == 0 || val % 447 == 0 || val%477 == 0 || val%474 == 0 || val % 744 == 0 || val % 774 == 0 || val % 777 == 0 || val % 747 == 0)
    {
        cout << "YES\n";
    }
    else cout << "NO\n";

    return 0;
}