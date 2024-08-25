// clang-format off
// Author :- Tushar || 30-07-2024 20:19:27
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
    vector<string> arr(2);
    cin >> arr[0] >> arr[1];
    int count = 0;

    for (int i = 1; i < n - 1; i++) {
      if (arr[0][i] == '.') {
        if (arr[0][i - 1] == '.' && arr[0][i + 1] == '.' && arr[1][i] == '.') {
          if (arr[1][i - 1] == 'x' && arr[1][i + 1] == 'x') {
            count++;
          }
        }
      }

      if (arr[1][i] == '.') {
        if (arr[1][i - 1] == '.' && arr[1][i + 1] == '.' && arr[0][i] == '.') {
          if (arr[0][i - 1] == 'x' && arr[0][i + 1] == 'x') {
            count++;
          }
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}
