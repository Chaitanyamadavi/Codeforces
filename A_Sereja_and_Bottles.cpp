#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for(int i = 0; i< n; i++)
    {
        cin >> a[i] >> b[i];
    }
    
    int cnt = 0;
    for(int i = 0; i< n; i++)
    {
        bool found = false;
        for(int j = 0; j< n; j++)
        {
            if( i != j && a[i] == b[j])
            {
                found = true;
                break;
            }
        }
        if(!found) cnt++;
    }
    cout << cnt << '\n';
    
    return 0;
}