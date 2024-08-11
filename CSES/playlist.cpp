#include <math.h>
#include <iostream>
#include <cstdint>
#include <map>
#include <deque>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>
#include <string>


using namespace std;
#define ASCII_SIZE 256
#define MAX_INT 2000000
#define ll long double
#define MOD 1e9
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define psi pair<string, int>
#define pb push_back
#define vs vector<string>
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)

// ll playlist(vector<ll> &v,ll n)
// {

//     unordered_set<ll> s;
    
//     ll mx=0;

//     for(ll i=0;i<n;i++){
        
//         while(!dq.empty() && find(dq.begin(), dq.end(), v[i])!= dq.end()){
//             dq.pop_front();

//         }
//         dq.push_back(v[i]);

//         mx=max(mx,(ll)dq.size());
//     }
//     return mx;


// }

ll playlist(vector<ll> &v,ll n){
    map<ll,ll> mp;
    ll mx=0;
    ll start=0;
    ll maxstart=0;


    for(ll i=0;i<n;i++){
        if(mp.find(v[i]) != mp.end()){
           start = max(start,mp[v[i]] + 1);
        }

        mp[v[i]] = i;

        if(i-start+1>mx){
            mx=i-start+1;
            maxstart=start;

        }
        
    }
    return mx;
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

    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    // vector<vector<ll>> dp(n, vector<ll>(k + 1, -1));
    ll ans = playlist(v,n);
    cout<<ans<<endl;
}