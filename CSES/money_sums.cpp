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