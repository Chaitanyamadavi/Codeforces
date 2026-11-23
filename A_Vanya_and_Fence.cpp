#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,h;
    cin >> n >> h;
    vector<int>a(n);
    for(int &x:a) cin >> x;
    
    int cnt = 0;
    for(int x :a)
    {
        if(x > h) cnt+= 2;
        else cnt++;
    }
    cout << cnt << '\n';

    return 0;
}