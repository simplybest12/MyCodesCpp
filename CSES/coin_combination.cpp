#include <bits/stdc++.h>

using namespace std;
#define ASCII_SIZE 256
#define MAX_INT 2000000
#define ll long long
#define MOD 1e9
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define psi pair<string, int>
#define pb push_back
#define vs vector<string>
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)

ll fun(int k,vector<ll> &v,int n,vll &dp)
{
    if( k==0) return 1;
    
    if(k<0) return 0;
    if(dp[k] != -1) return dp[k] % 1000000007;
    
    ll ways=0;
    for(int i=0;i<n;i++){
        ways = (ways + fun(k-v[i],v,n,dp)) % 1000000007;
    }
    return dp[k] =  ways % 1000000007;

}




int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    ll n, k;
    cin >> n >> k;

    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    vll dp(k+1,-1);
    // vector<vector<ll>> dp(n, vector<ll>(k + 1, -1));
    ll ans = fun(0,k,v,n,dp);
    cout<<ans<<endl;
}