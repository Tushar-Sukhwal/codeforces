// Author :- Tushar || 22-08-2024 01:33:20
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

void dfs(vector<vector<int>>& adj, vector<int>& vis, int node, int& count) {
  if (vis[node]) return;

  count++;
  vis[node] = 1;
  for (auto it : adj[node]) {
    dfs(adj, vis, it, count);
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> adj(n + 1);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  vector<int> vis(n + 1, 0);

  int total = 0;
  for (int i = 1; i <= n; i++) {
    int count = 0;
    if (vis[i] == 0) {
      dfs(adj, vis, i, count);
    }
    if (count > 0) total += count - 1;
  }

  cout << m - total << endl;

  return 0;
}
