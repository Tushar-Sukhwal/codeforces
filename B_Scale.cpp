// clang-format off
// Author :- Tushar || 26-07-2024 20:13:26
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
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<string> m(n);

    for (int i = 0; i < n; i++) {
      cin >> m[i];
    }
    vector<vector<char>> ans((n / k) + 1);

    int x = 0;

    for (int i = 0; i < n; i += k) {
      for (int j = 0; j < n; j += k) {
        ans[x].push_back(m[i][j]);
      }
      x++;
    }
    for (int i = 0; i < n / k; i++) {
      for (int j = 0; j < n / k; j++) {
        cout << ans[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}
