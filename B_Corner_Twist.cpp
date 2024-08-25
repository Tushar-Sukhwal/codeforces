// clang-format off
// Author :- Tushar 
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007;
// clang-format on

int32_t main() {
  fastio;
  int tt;
  cin >> tt;

  while (tt--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr1(n, vector<int>(m)), arr2(n, vector<int>(m));
    char t;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) cin >> t, arr1[i][j] = t - '0';

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) cin >> t, arr2[i][j] = t - '0';

    bool flag = true;

    for (int i = 1; i < n; i++) {
      if (!flag) break;
      for (int j = 1; j < m; j++) {
        if (arr1[i - 1][j - 1] != arr2[i - 1][j - 1]) {
          int diff = (arr2[i - 1][j - 1] - arr1[i - 1][j - 1] + 3) % 3;

          arr1[i - 1][j - 1] = arr2[i - 1][j - 1];

          arr1[i][j - 1] = (arr1[i][j - 1] + 2 * diff) % 3;

          arr1[i - 1][j] = (arr1[i - 1][j] + 2 * diff) % 3;

          arr1[i][j] = (arr1[i][j] + diff) % 3;
          debug(arr1, i - 1);
          debug(arr2, i - 1);
        }
      }
    }

    for (int i = 0; i < n; i++)
      if (arr1[i][m - 1] != arr2[i][m - 1]) {
        flag = false;
        break;
      }

    for (int j = 0; j < m; j++)
      if (arr1[n - 1][j] != arr2[n - 1][j]) {
        flag = false;
        break;
      }

    if (flag) yes else no
  }

  return 0;
}