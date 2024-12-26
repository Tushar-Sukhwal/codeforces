// Author :- Tushar || 22-12-2024 16:50:01
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

void dfs(int node, int par, vector<int>& depth, vector<vector<int>>& adj) {
  int maxx = 0;
  for (auto it : adj[node]) {
    if (it != par) {
      dfs(it, node, depth, adj);
      maxx = max(maxx, 1 + depth[it]);
    }
  }
  depth[node] = maxx;
}

void dfs2(int node, int par, vector<int>& depth, vector<vector<int>>& adj,
          vector<int>& ans, int par_ans) {
  vector<int> prefixMax, suffixMax;

  // get depth
  for (auto it : adj[node]) {
    if (it != par) {
      prefixMax.push_back(depth[it]);
      suffixMax.push_back(depth[it]);
    }
  }

  // build prefix and suffix array
  for (int i = 1; i < prefixMax.size(); i++) {
    prefixMax[i] = max(prefixMax[i], prefixMax[i - 1]);
  }
  for (int i = suffixMax.size() - 2; i >= 0; i--) {
    suffixMax[i] = max(suffixMax[i], suffixMax[i + 1]);
  }

  // find ans
  int c = 0;
  for (auto it : adj[node]) {
    if (it != par) {
      int op1 = INT_MIN;
      int op2 = INT_MIN;

      if (c != 0) op1 = prefixMax[c - 1];
      if (c != suffixMax.size() - 1) op2 = suffixMax[c + 1];

      int partialans = 1 + max(par_ans, max(op1, op2));

      dfs2(it, node, depth, adj, ans, partialans);
      c++;
    }
  }

  ans[node] = 1 + max(par_ans, (prefixMax.empty() ? -1 : prefixMax.back()));
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

  vector<int> depth(n + 1, 0);
  vector<int> ans(n + 1, 0);
  dfs(1, -1, depth, adj);

  dfs2(1, -1, depth, adj, ans, 0);

  for (int i = 1; i < n + 1; i++) {
    cout << ans[i] << " ";
  }

  return 0;
}
