#include <math.h>
#include <iostream>
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
#define MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define psi pair<string, int>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define REP(i, a, b) for (int i = a; i < b; i++)

ll sticklength(vll v, ll n)
{
    sort(v.begin(),v.end());
    ll k=0;
    if(n%2){
        k = v[n/2];
    }
    else{
        k = (v[n/2] + v[n/2 - 1])/2;
    }
    ll sum=0;
    for(auto it:v){
        sum+=abs(k-it);
    }
    return sum;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    int n;
    cin >> n;
    vll vp;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        vp.push_back(a);
    }

    cout << sticklength(vp, n) << endl;
}