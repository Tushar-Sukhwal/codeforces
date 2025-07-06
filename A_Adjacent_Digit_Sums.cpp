// Author :- Tushar || 11-02-2025 20:06:35
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
  int n, m;
  cin >> n >> m;

  if (m - n > 1 || m - n == 0) {
    cout << "No" << endl;
    return;
  } else if (m - n == 1 || (n - m + 1) % 9 == 0) {
    cout << "Yes" << endl;
    return;
  }
  cout << "No" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
