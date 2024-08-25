// clang-format off
// Author :- Tushar || 06-08-2024 20:21:05
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
    string str;
    cin >> str;
    string t;
    cin >> t;
    int n = str.size(), m = t.size();
    int i = 0, it = 0;
    while (i < n) {
      if (it < m) {
        if (str[i] == '?') {
          str[i] = t[it];
          it++;
        } else if (str[i] == t[it]) {
          it++;
        }
      }
      i++;
    }

    if (it >= m) {
      for (int i = 0; i < n; i++) {
        if (str[i] == '?') {
          str[i] = 'z';
        }
      }
      yes cout << str << endl;
    } else
      no
  }

  return 0;
}
