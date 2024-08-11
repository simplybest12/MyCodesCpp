#include<bits/stdc++.h>
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


// ll dig(ll n){
//     ll c=0;
//     while(n>0){
//         c++;
//         n/=10;
//     }
//     return c;
// }


ll fun(int i,int j,vector<vector<char>> &gr,int n,vector<vector<ll>> &dp){
    if(i==(n-1) && j==(n-1)){
        if(gr[i][j] == '*') return 0;
        return 1;
    }

    if(i>=n || j>=n) return 0;

    if(gr[i][j] == '*' ) return 0;

    if(dp[i][j] != -1) return dp[i][j] % MOD;
    
    
  

    
       ll  right = fun(i,j+1,gr,n,dp);
   
 

   
      ll  down = fun(i+1,j,gr,n,dp);
    

    return dp[i][j] = (right+down)%MOD;


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
cin>>n;
ll c=0;
// cout<<fun(n)<<endl;
vector<vector<char>> gr;
vector<vector<ll>> dp(n,vector<ll>(n,-1));
for(ll i=0;i<n;i++){
    vector<char> v;
    for(ll j=0;j<n;j++){
        char x;
        cin>>x;
        v.push_back(x);
    }
    gr.push_back(v);
}
// if(gr[n-1][n-1] == '*'){
//     cout<<0<<endl;
//     return 0;
//     }
 
cout<<fun(0,0,gr,n,dp)<<endl;



}