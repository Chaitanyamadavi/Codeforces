#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int>st;
    int m;
    cin >> m;
    vector<int>a(m);
    for(int &x:a) 
    {
        cin >> x;
        st.insert(x);
    }
    int q;
    cin >> q;
    vector<int>b(q);
    for(int &x:b) 
    {
        cin >> x;
        st.insert(x);
    }
    cout << (st.size() == n ? "I become the guy.\n": "Oh, my keyboard!\n");
    

    return 0;
}