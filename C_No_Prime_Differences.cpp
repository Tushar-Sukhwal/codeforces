// clang-format off
// Author :- Tushar || 30-07-2024 10:14:55
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
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜

  */
// clang-format on

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m, 0));

    if (n % 2 == 0) {
      int count = 1;
      for (int i = 1; i < n; i += 2) {
        for (int j = 0; j < m; j++) {
          arr[i][j] = count;
          count++;
        }
      }
      for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < m; j++) {
          arr[i][j] = count;
          count++;
        }
      }
    } else {
      int count = 1;
      for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < m; j++) {
          arr[i][j] = count;
          count++;
        }
      }
      for (int i = 1; i < n; i += 2) {
        for (int j = 0; j < m; j++) {
          arr[i][j] = count;
          count++;
        }
      }
    }

    for (auto it : arr) {
      for (auto itt : it) {
        cout << itt << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
