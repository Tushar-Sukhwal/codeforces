// Author :- Tushar || 21-06-2025 20:06:35
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
  vector<int> l(3), b(3);
  for (int i = 0; i < 3; i++) {
    cin >> l[i] >> b[i];
  }
  if (l[0] == b[0]) {
    cout << "NO" << endl;
    return;
  }

  if (l[0] > b[0]) {
    if ((l[1] == l[0] && l[2] == l[0] && b[1] + b[2] == l[0] - b[0]) ||
        (l[2] + l[1] == l[0] && b[1] == b[2] && b[1] == l[0] - b[0])) {
      cout << "YES" << endl;
      return;
    }
  } else {
    if (b[1] == b[0] && b[2] == b[0] && l[2] + l[1] == b[0] - l[0] ||
        b[1] + b[2] == b[0] && l[1] == l[2] && l[1] == b[0] - l[0]) {
      cout << "YES" << endl;
      return;
    }
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
