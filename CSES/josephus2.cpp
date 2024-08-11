#include <math.h>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <utility>
#include <list>
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




vector<ll> josephus(list<ll>& lst, ll k) {
   vector<ll> result;
    auto it = lst.begin();

    while (!lst.empty()) {
        // Advance the iterator k-1 times in a cyclic manner
        for (int i = 0; i < k - 1; ++i) {
            ++it;
            if (it == lst.end()) {
                it = lst.begin(); // Wrap around to the beginning
            }
        }

        // Add the element to the result and erase it from the list
        result.push_back(*it);
        *it = -1;

        // If the iterator reaches the end, wrap it around to the beginning
        if (it == lst.end() && !lst.empty()) {
            it = lst.begin();
        }
    }

    return result;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
ll n,k;
cin>>n>>k;

list<ll> li;
for(int i=0;i<n;i++){
    li.pb(i+1);
}

vll ans = josephus(li,k);
for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}



}