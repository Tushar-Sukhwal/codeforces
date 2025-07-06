// Author :- Tushar || 23-06-2025 20:05:17
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

void solve() {
  int a, x, y;
  cin >> a >> x >> y;

  if (max(x, y) < a) {
    cout << "YES" << endl;
    return;
  } else if (min(x, y) > a) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
