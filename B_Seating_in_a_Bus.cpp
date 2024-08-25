// clang-format off
// Author :- Tushar || 13-08-2024 20:19:42
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> b(n, 0);

    int flag = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        b[arr[i] - 1] = 1;
      } else {
        if (arr[i] - 2 >= 0 && b[arr[i] - 2] == 1) {
          b[arr[i] - 1] = 1;
        } else if (arr[i] < n && b[arr[i]] == 1) {
          b[arr[i] - 1] = 1;
        } else {
          flag = 1;
          break;
        }
      }
    }
    if (flag) no else yes
  }

  return 0;
}
