// clang-format off
// Author :- Tushar || 06-08-2024 20:46:48
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
    int l, r;
    cin >> l >> r;

    set<int> s;
    for (int i = 1; i < 15; i++) {
      s.insert(pow(3, i));
    }

    int ans = 0;
    int temp = l;
    while (temp) {
      temp = temp / 3;
      ans++;
    }
    
    int f = ans;
    ans += ans;

    for (int i = l + 1; i <= r; i++) {
      if (i % 3 == 0 && s.count(i)) f++;
      ans += f;
    }
    cout << ans << endl;
  }

  return 0;
}
