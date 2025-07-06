// Author :- Tushar || 21-06-2025 20:47:58
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

  if (m < n) {
    cout << -1 << endl;
    return;
  }
  if (m > n * (n + 1) / 2) {
    cout << -1 << endl;
    return;
  }

  int k = n;

  for (int i = 0; i <= n; i++) {
    if (n * i - i * (i - 1) / 2 >= m) {
      k = i;
      break;
    }
  }

  int diff = n * k - k * (k - 1) / 2 - m;

  vector<int> parent(n + 1, k);

  if (k == 1) {
    cout << 1 << endl;
    for (int i = 1; i <= n; i++)
      if (i != k) cout << i << " " << parent[i] << endl;

    return;
  }

  int num = min(diff / (k - 1), n - k);

  for (int i = k + 1; i <= k + num; i++) parent[i] = 1;

  diff -= num * (k - 1);

  for (int i = k - 1; i >= 2 && diff != 0; i--) {
    int d = i - 1;
    if (d <= diff) {
      parent[i] = 1;
      diff -= d;
    }
  }

  cout << k << endl;

  for (int i = 1; i <= n; i++)
    if (i != k) cout << i << " " << parent[i] << endl;
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
