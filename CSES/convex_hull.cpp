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
#define psi pair<string, int>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define REP(i, a, b) for (int i = a; i < b; i++)





vector<pair<ll,ll>> convex_hull(vector<pair<ll,ll>> points){
    int n = points.size();
    if(n<=3) return points;

    sort(points.begin(),points.end());

    vector<pair<ll,ll>> up,lp;

    for(auto& it : points){
        while(up.size())
    }



}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
int n,x;
cin>>n>>x;
vll tickets;
vll price;
for(int i=0;i<n;i++){
    ll k;
    cin>>k;
    tickets.push_back(k);
}
for(int i=0;i<x;i++){
    ll k;
    cin>>k;
    price.push_back(k);
}
sort(tickets.begin(),tickets.end());
auto lb = lower_bound(tickets.begin(), tickets.end(), 40);
cout<<*(lb-1)<<endl;



}