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
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define REP(i, a, b) for (int i = a; i < b; i++)

// vector<vector<ll>> &dp;
ll fun(ll i, vll &m, vll &p, ll n, ll k, vector<vector<ll>> &dp)
{
    if(k<=0) return 0;
    if (i == n - 1)
    {

        if (k >= m[n - 1])
            return p[n - 1];
        else
            return 0;
    }
    if (dp[i][k] != -1)
        return dp[i][k];
    

    ll pick = LLONG_MIN;
    ll non_pick = fun(i + 1, m, p, n, k, dp);
    if (k >= m[i])
    {
        pick = p[i] + fun(i + 1, m, p, n, k - m[i], dp);
    }

    return dp[i][k] = max(pick, non_pick);
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
    vll money;
    vll pages;
    vector<vector<ll>> dp(n, vector<ll>(k + 1, -1));

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x ;
        money.push_back(x);

    }
        for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x ;
        pages.push_back(x);

    }
    cout << fun(0, money, pages, n, k, dp) << endl;
}