// Author :- Tushar || 04-04-2025 01:18:00
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

void dfs(int node, int par, int &ans, int prev, vector<vector<int>> &adj,
         vector<pair<int, int>> &r) {
  int p;
  if (abs(r[node].first - prev) > abs(r[node].second - prev)) {
    if (par != -1) ans += abs(r[node].first - prev);
    p = r[node].first;
  } else {
    if (par != -1) ans += abs(r[node].second - prev);
    p = r[node].second;
  }

  for (auto it : adj[node]) {
    if (it != par) {
      dfs(it, node, ans, p, adj, r);
    }
  }
}

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> r(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> r[i].first >> r[i].second;
  }
  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int i = 1; i <= n; i++) {
    if (adj[i].size() == 1) {
      int ans1 = 0, ans2 = 0;
      dfs(i, -1, ans1, 0, adj, r);
      dfs(i, -1, ans2, INT64_MAX, adj, r);
      cout << max(ans1, ans2) << endl;
      return;
    }
  }
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
