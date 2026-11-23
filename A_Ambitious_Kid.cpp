#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    
    int zero = count(a.begin(), a.end(), 0);
    if(zero > 0) 
    {
        cout << 0 << '\n';
    }
    else
    {
        sort(a.begin(), a.end(), [](int x, int y){
        return abs(x) < abs(y);
        });
        cout << abs(a[0]) << '\n';
    }

    return 0;
}