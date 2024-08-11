#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)

// Function to find the minimum number of primes that sum up to target
int fun(int ind, int target, vi &arr, vvi &dp) {
    if (ind == 0) {
        if (target % arr[0] == 0) return target / arr[0];
        return 1e9;  // Return a large number to indicate infeasibility
    }
    if (dp[ind][target] != -1) return dp[ind][target];
    int pick = 1e9;
    if (target >= arr[ind]) {
        pick = 1 + fun(ind, target - arr[ind], arr, dp);
    }
    int non_pick = fun(ind - 1, target, arr, dp);
    return dp[ind][target] = min(pick, non_pick);
}

// Function to find minimum number of primes to sum up to n, with primes <= m
int minNum(int n, int m) {
    vector<bool> prime(m + 1, true);
    vi primes;

    for (int p = 2; p * p <= m; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= m; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= m; p++) {
        if (prime[p]) primes.push_back(p); 
    }
    
    vvi dp(primes.size(), vi(n + 1, -1));
    int result = fun(primes.size() - 1, n, primes, dp);
    
    if (result >= 1e9) return -1;  // If no valid result found
    return result;
}

int main() {
    int q;
    cin >> q;
    int n, m;

    while (q--) {
        cin >> n >> m;
        cout << minNum(n, m) << endl;
    }
}
