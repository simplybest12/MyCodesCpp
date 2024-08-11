#include <math.h>
#include <iostream>
#include <cstdint>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>
#include <string>


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

ll fun(ll i, vector<ll> &v, ll n, ll k, vector<vector<ll>> &dp)
{
    if(k==0 ){
        return 0;
    }
    if (i == n)
    {
        if (k % v[n - 1] == 0)
        {
            return dp[i][k] = k / v[n - 1];
        }
        return dp[i][k] = 1e9;
    }

    if (dp[i][k] != -1)
        return dp[i][k];

    ll pick = LLONG_MAX;

    ll non_pick = fun(i + 1, v, n, k, dp);

    if (v[i] <= k)
    {
        pick = 1 + fun(i, v, n, k - v[i], dp);
    }

    return dp[i][k] = min(pick, non_pick);
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
    vector<vector<ll>> dp(n+1, vector<ll>(k + 1, -1));
    ll ans = fun(0, v, n, k, dp);
    if(ans >= 1e9) cout<<-1<<endl;
    else cout<<ans<<endl;
}