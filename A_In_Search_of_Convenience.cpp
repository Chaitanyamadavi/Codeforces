#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int x,y,r;
    cin >> x >> y >> r;
    
    for(int i = x-r; i<= x+r; i++)
    {
        for(int j = y-r; j<= y+r ; j++)
        {
            if((x-i)*(x-i) + (y-j)*(y-j) == r*r)
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }

    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {   
        solve();
    }
    return 0;
}