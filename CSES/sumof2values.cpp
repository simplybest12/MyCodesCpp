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
#define vd vector<double>
#define psi pair<string, int>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define REP(i, a, b) for (int i = a; i < b; i++)

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    ll n;
    cin >> n;
    if(n==1){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    pair<int,int> p;
    ll x;
    cin >> x;
    vi a;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    vector<int> b(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;
    bool flag = 0;
    int j = n-1;
    while(i<j){
        if(b[i]+b[j]==x){
            p.first = b[i];
            p.second = b[j];
            flag = 1;
            break;
        }
        else if(b[i]+b[j]<x){
            i++;
        }
        else{
            j--;
        }
    }
    if(!flag){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
    }
    for(auto it = a.begin(); it != a.end(); ++it){
        if(*it==p.first){
            cout<<distance(a.begin(),it)+1<<endl;
            *it=-1;
            break;
        }
    }
    for(auto it = a.begin(); it != a.end(); ++it){
        if(*it==p.second){
            cout<<distance(a.begin(),it)+1<<endl;
            a.erase(it);
            break;
        }
    }

}




















    // unordered_map<ll, vector<ll>> mp;
    // for (auto i = 0; i < n; i++)
    // {
    //     mp[a[i]].push_back(i);
    // }
    // for(auto it:mp){
    //     cout<<it.first<<" ";
    //     for(auto iit:it.second){
    //         cout<<iit<<" ";
    //     }
    //     cout<<endl;
    // }
    // for (auto it = mp.begin(); it != mp.end(); ++it) {
    //     auto iit = mp.find(x - it->first);
    //     if (iit != mp.end() && it != iit) {
    //         cout << it->second + 1 << " " << iit->second + 1 << endl;
    //         return 0;
    //     }
    // }
    // cout << "IMPOSSIBLE" << endl;