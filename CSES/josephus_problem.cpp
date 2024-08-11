#include <math.h>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;
#define ASCII_SIZE 256
#define MAX_INT 2000000
#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define pb push_back
#define psi pair<string, int>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define REP(i, a, b) for (int i = a; i < b; i++)



vll josephus_1(vector<ll> v){
    vll ans;
    ll n = v.size();
    ll k=n;
    ll c=0;
    int i=0;
    while(true){
        
        if(c%2==1 && v[i] != -1){
            ans.pb(v[i]);
            v[i]=-1;
            c++;
         
        }
        if(v[i] != -1 ) c++;
        if(ans.size()==n) break;
        i+=1;
        i=i%(k);
        // cout<<i<<endl;


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
int n;
cin>>n;
vll v;
for(int i=0;i<n;i++){
    v.pb(i+1);
}

vll ans = josephus_1(v);
for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}



}