// clang-format off
// Author :- Tushar || 05-07-2024 09:20:46
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
// #define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007;
// clang-format on

int recc(int i, int j, vector<vector<int>>& dp, int& n) {
  // debug(i, j);
  if (j == 0) return 1;
  if (i == 1) return 1;

  if (dp[i][j] != -1) return dp[i][j];

  return dp[i][j] = (recc(i, j - 1, dp, n) + recc(i - 1, n - j, dp, n)) % mod;

}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    cerr << tt << endl;
    vector<vector<int>> dp(1001, vector<int>(1001, -1));
    cout << recc(k, n, dp, n) << endl;
  }

  return 0;
}
