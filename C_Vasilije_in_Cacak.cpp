// Author :- Tushar || 11-04-2025 15:19:28
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
  int n, k, x;
  cin >> n >> k >> x;

  int minn = k * (k + 1) / 2;
  int maxx = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;

  if (x <= maxx && x >= minn)
    cout << "YES" << endl;
  else
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
