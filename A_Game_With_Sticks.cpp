#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    if(min(n,m) %2 == 1) cout << "Akshat\n";
    else cout << "Malvika\n";

    return 0;
}