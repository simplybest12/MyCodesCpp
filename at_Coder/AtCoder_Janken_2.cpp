#include <math.h>
#include <iostream>
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

    int n;
    cin >> n;
    int original_n = n;
    vector<psi> nstr;
    while (n--)
    {
        int k;
        string str;
        cin >> str >> k;
        nstr.push_back(make_pair(str, k));
    }
    sort(nstr.begin(), nstr.end());
    ll sum = 0;
    for (auto it : nstr)
    {
        sum += it.second;
    }
    int ans = sum % original_n;
    // cout<<ans<<endl;
    cout << nstr[(ans == 0 ? original_n : ans)].first << endl;
}