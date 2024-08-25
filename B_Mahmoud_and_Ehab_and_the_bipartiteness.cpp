// Author :- Tushar || 21-08-2024 16:55:02
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

void dfs(vector<vector<int>>& adj, int par, int node, int& g, int& b,
         int last) {
  if (last == 1) {
    g++;
    last = 0;
  } else {
    b++;
    last = 1;
  }

  for (auto it : adj[node]) {
    if (it != par) {
      dfs(adj, node, it, g, b, last);
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  vector<vector<int>> adj(n + 1);

  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int g = 0, b = 0;

  dfs(adj, -1, 1, g, b, 0);

  cout << g * b - n + 1;

  return 0;
}
