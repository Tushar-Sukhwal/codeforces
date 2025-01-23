// Author :- Tushar || 17-01-2025 20:06:49
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    int ans = 0;

    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      ans += 4 * m;
      if (i) ans = ans - 2 * (2 * m - x - y);
    }
    cout << ans << endl;
  }

  return 0;
}
