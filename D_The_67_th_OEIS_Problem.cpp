#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int lim = 200000;
const int req = 10000 + 10;
vector<int>primes;
void sieve()
{
    vector<bool>is_prime(lim, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i < lim ; i++)
    {
        if(is_prime[i])
        {
            primes.push_back(i);
            if(primes.size() == req) break;
            if((ll)i*i < lim)
            {
                for(ll j = (ll)i*i; j < lim ; j+= i) is_prime[j] = false; 
            }
        }
    }
}
void solve()
{   
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll val = 1LL*primes[i]*primes[i+1];
        cout << val << (i == n-1 ? '\n' : ' ');
    }
    
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    int t;
    cin >> t;
    while(t--)
    {   
        solve();
    }
    return 0;
}