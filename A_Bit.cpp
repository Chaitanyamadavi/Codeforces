#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int count = 0;
    while(n--)
    {   
        string s;
        cin >> s;
        if(s == "++X" || s == "X++") count++;
        else count--;
    }   
    cout << count << endl;

    return 0;
}