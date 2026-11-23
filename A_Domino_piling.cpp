#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    cin >> m >> n;
    int mul = m*n;
    if(mul & 1)
    {
        cout << (mul - 1)/2 << endl;
    }
    else cout << mul/2 << endl;
    return 0;
}