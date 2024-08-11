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
#define ull unsigned long long
#define MAX_INT 2000000
#define ll long double
#define MOD 1e9
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define vd vector<double>
#define psi pair<string, int>
#define pb push_back
#define vs vector<string>
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)


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
    vll x;
    vll y;
    for(ll i=0;i<q;i++){
        ll a, b;
        cin >> a >> b;
        x.pb(a);
        y.pb(b);
    }
   ll res=0;
    for(ll i=0;i<q-1;i++){
        res+=((x[i]*y[i+1]) - (x[i+1]*y[i]) );
        // cout<<"RES "<<res<<endl;
    }
    res+=((x[q-1]*y[0]) - (x[0] * y[q-1]));
    // cout<<abs(res)<<endl;
    if(res<0) cout<< -1*res<<endl;
    else cout<<res<<endl;
    }