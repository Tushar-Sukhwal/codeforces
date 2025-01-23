// Author :- Tushar || 22-01-2025 22:20:46
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
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    vector<int> indeg(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
      int u, v;
      cin >> u >> v;

      adj[u].push_back(v);
      adj[v].push_back(u);
      indeg[u]++;
      indeg[v]++;
    }
    int ans = 1;
    int maxx = 0, ind = 0;
    for (int i = 1; i <= n; i++) {
      if (indeg[i] > maxx) {
        ind = i;
        maxx = indeg[i];
      }
    }
    ans = maxx;
    indeg[ind] = 0;
    for (auto it : adj[ind]) {
      indeg[it]--;
    }
    maxx = 0;
    ind = 0;

    for (int i = 1; i <= n; i++) {
      if (indeg[i] > maxx) {
        ind = i;
        maxx = indeg[i];
      }
    }

    if (maxx == 0) {
      ans--;
    } else {
      ans += maxx - 1;
    }

    cout << ans << endl;
  }

  return 0;
}
