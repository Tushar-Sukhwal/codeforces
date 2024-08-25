// clang-format off
// Author :- Tushar || 13-08-2024 20:11:19
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
  int flag = 0;
  while (tt--) {
    string s;
    cin >> s;
    int flag = 0;
    if (s.size() > 2 && s[0] == '1' && s[1] == '0') {
      if (s[2] >= '2' || (s[2] == '1' && s.size() > 3)) flag = 1;
    }

    if (flag) yes else no
  }

  return 0;
}
