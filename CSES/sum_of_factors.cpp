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

ll fun(ll a, ll b)
{
    ll ans = 1;
    a = a % MOD; // Ensure 'a' is within the bounds of 'MOD'
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % MOD; // Correct operation for modular exponentiation
        }
        a = (a * a) % MOD; // Square 'a' and take modulo
        b /= 2;            // Divide b by 2
    }
    return ans;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    ll n;
    cin >> n;
    vll factors;
    ll ans=1;
    map<ll,ll> mp;

    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    while (n % 3 == 0) {
        factors.push_back(3);
        n /= 3;
    }

    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
        while (n % (i + 2) == 0) {
            factors.push_back(i + 2);
            n /= (i + 2);
        }
    }

    if (n > 2) {
        factors.push_back(n);
    }

    for(auto it:factors){
        mp[it]++;
    }
    // for(auto it:mp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    // cout<<endl;

    for(auto it:mp){
        // cout<<fun(it.first,it.second+1)<<" ans"<<endl;
        ll p = (fun(it.first,it.second+1) - 1)/(it.first -1);
        // cout<<p<<endl;
        ans = (ans*p);
    }
    cout<<ans <<endl;
}