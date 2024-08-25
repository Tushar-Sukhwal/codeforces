// Author :- Tushar || 25-08-2024 17:04:39
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

int query(int a, int b) {
  int ans;
  cout << "? " << a << " " << b << endl;
  cin >> ans;
  return ans;
}

int search(int l, int r) {
  if (l == r) return l;

  int m1 = l + (r - l) / 3;
  int m2 = r - (r - l) / 3;

  // cout << "l-" << l << " r-" << r << endl;

  int q = query(m1, m2);
  if (q == m1 * m2)
    return search(m2 + 1, r);
  else if (q == m1 * (m2 + 1))
    return search(m1 + 1, m2 - 1);
  else
    return search(l, m1 - 1);
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int ans = search(1, 1000);
    cout << "! " << ans << endl;
  }
  return 0;
}
