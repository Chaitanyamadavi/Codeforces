#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{   
    int n;
    string s;
    cin >> n >> s;

    vector<int>a;
    stack<int>st;
    int j = 1;
    for(int i = 0; i< n; i++)
    {
        if(s[i] == '1')
        {
            st.push(j);
            j++;
        }
        else if(s[i] == '2')
        {   
            if(!st.empty())
            {
                st.pop();
                a.push_back(j);
                
            }
            j++;
        }
        else if(s[i] == '3')
        {
            j++;
        }
    }

    while(!st.empty())
    {
        a.push_back(st.top());
        st.pop();
    }
    sort(a.begin(), a.end());
    if(a.size() == 0)
    {
        cout << 0 << endl;
        cout << endl;
    }
    else
    {
        cout << a.size() << endl;
        for(int x:a) cout << x <<  " ";
        cout << endl;
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