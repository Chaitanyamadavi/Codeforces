#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,n;
    cin >> a >> b >> n;
    
    string s = to_string(a);
    for(int i = 0; i<= 9; i++)
    {
        if( (a*10 + i) %b == 0)
        {
            s += char('0' + i);
            while(n-- > 1)
            {
                s += '0';
            }
            cout << s << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}