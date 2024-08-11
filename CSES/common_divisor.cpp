#include <bits/stdc++.h>

using namespace std;
#define ASCII_SIZE 256
#define MAX_INT 2000000
#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define psi pair<string, int>
#define pb push_back
#define vs vector<string>
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)




bool SieveOfEratosthenes(ll n)
{    
    int prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    return prime[n];
}

ll fun(vll v) {
    sort(v.begin(),v.end());

    for(int i= v.size()-1;i>=0;i--){
        if(SieveOfEratosthenes(v[i])) return v[i];
    }
    return -1;
}




int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
SieveOfEratosthenes(1000000);
int q;
cin>>q;
vll v;

for(int i=0;i<q;i++){
    ll x;
    cin>>x;
    v.pb(x);
}
}
