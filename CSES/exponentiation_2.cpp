#include <bits/stdc++.h>

using namespace std;
#define ASCII_SIZE 256
#define MAX_INT 2000000
#define ll long long

#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define psi pair<string, int>
#define pb push_back
#define vs vector<string>
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)


const long long MOD = 1000000007;
const long long PHI_MOD = MOD - 1;

ll fun(ll a, ll b,ll MOD) {
    if(a==0 && b==0) return 1;
    ll ans = 1;
    a = a % MOD;  // Ensure 'a' is within the bounds of 'MOD'
    while (b > 0) {
        if (b & 1) {
            ans = (ans * a) % MOD;  // Correct operation for modular exponentiation
        }
        a = (a * a) % MOD;  // Square 'a' and take modulo
        b /= 2;  // Divide b by 2
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

int q;
cin>>q;
while(q--){
          ll n,m,o;
   cin>>n>>m>>o;
   ll ans = fun(m,o,PHI_MOD);
   cout<<fun(n,ans,MOD)<<endl;
}
}