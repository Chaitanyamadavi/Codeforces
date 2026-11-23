#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int val = 0;
    char grid[10][10];
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j< 10; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j]== 'X')
            {
                int d = min({i,j,9-i, 9-j});
                val += d+1;
            }
        }
    }
    cout << val << '\n';
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