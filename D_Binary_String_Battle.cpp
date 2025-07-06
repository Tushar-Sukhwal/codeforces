// Author :- Tushar || 01-07-2025 20:21:54
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
  int n, k;
  cin >> n >> k;
  string str;
  cin >> str;

  vector<int> pre(n + 1, 0);
  for (int i = 0; i < n; i++) {
    if (str[i] == '1') {
      pre[i + 1] = pre[i] + 1;
    } else {
      pre[i + 1] = pre[i];
    }
  }

  int tot = pre[n];

  if (pre[n] <= k) {
    cout << "Alice" << endl;
    return;
  }

  // overlap
  if (n <= (2 * k) - 1) {
    for (int i = 0; i + k <= n; i++) {
      if (tot - pre[i + k] + pre[i] <= k) {
        cout << "Alice" << endl;
        return;
      }
    }
    cout << "Bob" << endl;
    return;
  }

  // all zero
  for (int i = 0; i + k <= n; i++) {
    if (pre[i + k] - pre[i] == 0) {
      cout << "Alice" << endl;
      return;
    }
  }
  cout << "Bob" << endl;
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
