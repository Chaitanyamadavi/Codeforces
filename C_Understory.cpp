#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int count = 0;
    multiset<int>st;
    while(t--)
    {   
        int a,b;
        cin >> a >> b;
        if(a == 1)
        {
            st.insert(b);
        }
        else
        {
            auto it = st.upper_bound(b);
            st.erase(st.begin(), it);
        }
        cout << st.size() << endl;
    } 

    return 0;
}