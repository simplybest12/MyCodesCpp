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

ll movie_festival(vector<pair<ll,ll>> vp,ll n){
     sort(vp.begin(), vp.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
        return a.second < b.second;
    });

    int cnt=1;
    // for(auto it:vp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    int k = vp[0].second;
    for(ll i=0;i<n-1;i++){
        if(k <= vp[i+1].first ){
            k = vp[i+1].second;
            cnt++;
        }
    }
    return cnt;







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
vector<pair<ll,ll>> vp;
for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    vp.push_back({a,b});
}

cout<<movie_festival(vp,n)<<endl;

}