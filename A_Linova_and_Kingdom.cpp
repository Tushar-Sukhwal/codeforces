// Author :- Tushar || 15-01-2025 11:22:31
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

void dfs(int node, int par, int dp, vector<vector<int>>& adj,
         vector<int>& depth, vector<int>& size) {
  depth[node] = dp;

  int sz = 1;
  for (auto it : adj[node]) {
    if (it != par) {
      dfs(it, node, dp + 1, adj, depth, size);
      sz += size[it];
    }
  }
  size[node] = sz;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;
  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;

    adj[v].push_back(u);
    adj[u].push_back(v);
  }
  vector<int> depth(n + 1, 0);
  vector<int> size(n + 1, 0);

  dfs(1, -1, 1, adj, depth, size);

  vector<pair<int, int>> arr;
  for (int i = 1; i <= n; i++) {
    arr.push_back({depth[i] - size[i], i});
  }
  sort(arr.begin(), arr.end());

  int ans = 0;
  while (k--) {
    ans += arr.back().first;
    arr.pop_back();
  }

  cout << ans << endl;

  return 0;
}