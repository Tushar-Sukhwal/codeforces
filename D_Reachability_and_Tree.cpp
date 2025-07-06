// Author :- Tushar || 23-06-2025 21:33:47
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

void dfs(vector<vector<int>>& adj, vector<int>& vis, int node, int val) {
  int num;
  if (val == 1)
    num = 2;
  else
    num = 1;

  vis[node] = num;

  for (auto it : adj[node]) {
    if (vis[it] == 0) {
      dfs(adj, vis, it, num);
    }
  }
}

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> adj(n + 1);

  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[v].push_back(u);
    adj[u].push_back(v);
  }

  int flag = 0;
  for (int i = 0; i < n + 1; i++) {
    if (adj[i].size() == 2) flag = i;
  }

  if (flag == 0) {
    cout << "NO" << endl;
    return;
  }

  vector<int> vis(n + 1, 0);
  vis[flag] = 3;

  dfs(adj, vis, adj[flag][0], 1);
  dfs(adj, vis, adj[flag][1], 2);

  cout << "YES" << endl;

  for (int i = 1; i < n + 1; i++) {
    for (int j = 0; j < adj[i].size(); j++) {
      if (vis[i] == 1) {
        cout << i << " " << adj[i][j] << endl;
      }
    }
  }
  cout << flag << " " << adj[flag][0] << endl;
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
