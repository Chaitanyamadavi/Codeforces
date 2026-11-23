#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    if(k-1 <= n-k)
    {
        while(k > 1)
        {
            cout << "LEFT\n";
            k--;
        }
        for(int i = 0 ; i< n; i++)
        {
            cout << "PRINT " << s[i] << endl;
            if( i != n-1) cout << "RIGHT\n";
        }
    }
    else
    {
        while(k < n)
        {
            cout << "RIGHT\n";
            k++;
        }
        for(int i = n-1; i >= 0; i--)
        {
            cout << "PRINT " <<  s[i] << endl;
            if(i != 0) cout << "LEFT\n";
        }
    }
    

    return 0;
}