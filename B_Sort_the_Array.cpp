#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll>a(n);
    for(ll &x:a) cin >> x;

    int l = -1, r = -1;
    for(int i = 0; i< n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            l = i;
            break;
        }
    }
    if(l == -1) 
    {
        cout << "yes\n1 1\n";
        return 0;
    }
    r = l;
    while(r < n-1 && a[r] > a[r+1]) r++;

    if( (l > 0 && a[r] < a[l-1]) || (r < n-1 && a[l] > a[r+1])) 
    {
        cout << "no" << endl;
        return 0;
    }
    reverse(a.begin()+l, a.begin()+r+1);
    if(is_sorted(a.begin(), a.end())) cout << "yes\n" << l+1 << " " << r+1 << endl;
    else cout << "no" << endl; 

    return 0;
}