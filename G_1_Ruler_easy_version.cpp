// clang-format off
// Author :- Tushar || 06-08-2024 21:12:56
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);

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

int query(int a, int b) {
  int x;
  cout << "? " << a << " " << b << endl;
  cin >> x;
  return x;
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  int ans = 0;
  while (tt--) {
    int l = 2, r = 999;

    int flag = 0;
    int mid;
    while (l <= r) {
      mid = (l + r) / 2;

      int q = query(mid, mid);

      if (l == r) {
        ans = l;
        if (q == mid * mid) ans++;
        break;
      }

      if (q == mid * mid) {
        l = mid + 1;
      } else {
        r = mid - 1;
        ans = mid;
      }
    }
    cout << "! " << ans << endl;
  }

  return 0;
}
