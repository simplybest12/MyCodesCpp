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
vll v;
for(int i=0;i<n;i++){
    ll k;cin>>k;
    v.push_back(k);
}
sort(v.begin(),v.end());
int c=0;
int i=0;
int j=n-1;
while(i<=j){
    if (v[i] + v[j] <= x)
    {
        c++;
        i++;
        j--;
    }
    else{
        c++;
        j--;
    }

    
}
cout<<c<<endl;
}