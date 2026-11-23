#include <bits/stdc++.h>
using namespace std;
using ll = long long;

    int n;
    vector<ll>a;

ll recurse(int index, ll s1 , ll s2){
    
    if(index == n) return abs(s1-s2);

    return min(recurse(index+1, s1+a[index],s2), recurse(index+1, s1, s2+a[index]));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n);
    for(ll &x:a) cin >> x;
    cout << recurse(0,0,0) << endl;

    return 0;
}