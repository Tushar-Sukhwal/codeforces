// Author :- Tushar || 20-01-2025 11:54:49
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
    int n, a, b;
    cin >> n >> a >> b;

    vector<set<int>> f(n + 1), g(n + 1);

    for (int i = 0; i < a; i++) {
      int u, v;
      cin >> u >> v;
      f[u].insert(v);
      f[v].insert(u);
    }
    for (int i = 0; i < b; i++) {
      int u, v;
      cin >> u >> v;
      g[u].insert(v);
      g[v].insert(u);
    }

    int count = 0;
    for (int i = 0; i < n + 1; i++) {
      for (auto it : g[i]) {
        if (!f[i].count(it))
          count++;
        else
          f[i].erase(it);
        g[i].erase(it);
      }

      for (auto it : f[i]) {
        if (!g[i].count(it))
          count++;
        else
          g[i].count(it);

        f[i].erase(it);
      }
    }

    cout << count / 2 << endl;
  }

  return 0;
}
