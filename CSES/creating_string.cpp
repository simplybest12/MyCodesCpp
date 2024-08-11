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

vs v;
string res = "";
void solve(int i, string &s, int n)
{
    if (i == n)
    {
        v.push_back(res);
        return;
    }

    res.push_back(s[i]);
    solve(i + 1, s, n);
    res.pop_back();
    solve(i + 1, s, n);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    string s;
    cin >> s;
    solve(0, s, s.size());
    cout << v.size() << endl;
    for (auto it : v)
    {
        cout << it << endl;
    }
}