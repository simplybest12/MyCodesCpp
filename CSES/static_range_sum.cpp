#include <math.h>
#include <iostream>
#include <cstdint>
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
#define MOD 1e9
#define vi vector<int>
#define vll vector<ll>
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

    int n, q;
    cin >> n >> q;
    vll v;
    vll sum;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        v.push_back(k);
    }

    sum.pb(v[0]);

    for (int i = 1; i < n; i++)
    {
        sum.pb(sum[i - 1] + v[i]);

    }
    // for(auto it : sum){
    //     cout<<it<<" ";
    // }
    // cout<<'\n';
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l-2<0){
            cout<<sum[r-1]<<endl;
        }
        else{
            cout << sum[r-1] - sum[l - 2] << endl;
        }
        
    }
}