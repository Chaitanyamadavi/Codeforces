#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> a = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
    };
    string s;
    cin >> s;
    int n;
    cin >> n;
    int j = -1;
    for(int i = 0; i< 12; i++)
    {
        if(a[i] == s) j = i;
    }
    int val = n % 12;
    cout << a[(j+val)%12]  << endl;
    return 0;
}