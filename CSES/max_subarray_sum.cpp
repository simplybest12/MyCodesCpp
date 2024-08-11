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
    ll k;
    cin>>k;
    v.push_back(k);
}

ll sum=0;
ll max_so_far = LLONG_MIN;

for(int i=0;i<n;i++){
    sum += v[i];
    if(max_so_far < sum){
        max_so_far = sum;
    }
    if(sum < 0){
        sum=0;
    }
}
cout<<max_so_far<<endl;
}