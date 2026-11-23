#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double p,d,t,f,c;
    cin >> p >> d >> t >> f >> c;
    
    int ans = 0;
    if(p >= d) 
    {
        cout << 0 << endl;
        return 0;
    }
    double dp = t * p;
    if(dp >= c)
    {
        cout << 0 << endl;
        return 0;
    }

    while(dp < c)
    {
        double ct = dp/(d-p);
        dp += p * ct;
        if(dp >= c) break;
        ans++;
        

        ct = dp/d +f;
        dp += p * ct;

    }
    cout << ans << endl;


    return 0;
}