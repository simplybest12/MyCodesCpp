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
#define ll long long
#define MOD 1e9
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define psi pair<string, int>
#define pb push_back
#define vs vector<string>
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)


ll gcd(ll a,ll b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}
ll lattice_points(ll x1, ll y1, ll x2, ll y2)
{
    ll dx = abs(x2-x1);
    ll dy = abs(y2-y1);

    return gcd(dx,dy) -1;
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
    cin >> q;
    vll x,y;
    for(int i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        x.pb(a);
        y.pb(b);
    }
    ll boundary_points = 0;
    for(int i=0;i<q-1;i++){
        boundary_points += abs(lattice_points(x[i],y[i],x[i+1],y[i+1])+1);
    }
    boundary_points += abs(lattice_points(x[0],y[0],x[q-1],y[q-1])+1);
    ll res=0;
    for(ll i=0;i<q-1;i++){
        res+=((x[i]*y[i+1]) - (x[i+1]*y[i]) );
      
    }
    res+=((x[q-1]*y[0]) - (x[0] * y[q-1]));

    if(res<0) (-1*res);
    
    ll inside_points = res/2 + 1 - (boundary_points/2);
    cout<<inside_points<<" "<<boundary_points<<endl;
    
    
    }