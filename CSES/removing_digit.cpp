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

vector<ll> mp(1000001,-1);
ll fun(ll n){
     if(n==0) return 0;
//     if(n<10) return 1ll;
    if(mp[n]!=-1) return mp[n];
    ll d = 1e9;
    ll k = n;
    while(k>0){
           if(k%10!=0)
       //     cout<<n<<" "<<k%10<<"\n";  
           d  = min(d,fun(n-(k%10)) +1ll) ;
        k/=10;
    }
    return mp[n]=d;


}


ll solve(ll n){

 


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
while(n>0){
    ll k = INT_MIN;
    ll t=n;
    while(t>0){
        k=max(k,t%10);
        t/=10;
    }
    n-=k;
    c++;
}
cout<<c<<endl;



}