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
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)





// ll fun(int k,vector<int> &dp){
//     int cnt = 0;


//     if(k == 0) return 1;
//     if(k<0) return 0;
    
//     if(dp[k] != -1) return dp[k] % MOD;
//     for(int i=1;i<=6;i++){
//         cnt = (cnt + fun(k-i,dp)) % MOD;
//     }
//     return dp[k] =  cnt;
// }
ll fun(int i, vector<int> &v, ll n, int k)
{
    
    if (i == n)
    {
     if(k% v[n-1] ==0){
            return k/v[n-1];
        }
     return 1e9;
    }

    ll pick = LLONG_MAX;

    ll non_pick = fun(i + 1, v, n, k);
    

    if (k>0)
    {
        pick = 1 +  fun(i, v, n, k - v[i]);
    }

    return pick;
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    int  k;
    cin >> k;
    int sum=0;
    vi v = {1,2,3,4,5,6};
    vector<int> dp(k+1,-1);
    int ans = fun(0, v, 6, k);
    cout << ans << endl;
}