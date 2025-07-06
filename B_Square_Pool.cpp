// Author :- Tushar || 21-06-2025 20:38:24
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
  int n, s;
  cin >> n >> s;
  int ans = 0;
  vector<pair<int, int>> d, a;
  for (int i = 0; i < n; i++) {
    int dx, dy, x, y;
    cin >> dx >> dy >> x >> y;
    if (dx == dy) {
      int temp = (y - x) % s;
      if (temp < 0) temp += s;
      if (temp == 0) ans += 1;
    } else if ((x + y) % s == 0)
      ans++;
  }
  cout << ans << endl;
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
