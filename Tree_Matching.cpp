// Author :- Tushar || 22-12-2024 13:34:29
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

vector<vector<int>> dp(200002, vector<int>(2, 0));

void dfs(int node, int par, vector<vector<int>>& adj) {
  for (auto it : adj[node]) {
    if (it != par) {
      dfs(it, node, adj);
      dp[node][0] += max(dp[it][0], dp[it][1]);
    }
  }

  for (auto it : adj[node]) {
    if (it != par) {
      dp[node][1] = max(
          dp[node][1], dp[node][0] - max(dp[it][1], dp[it][0]) + dp[it][0] + 1);
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

  dfs(1, -1, adj);
  cout << max(dp[1][1], dp[1][0]) << endl;

  return 0;
}
