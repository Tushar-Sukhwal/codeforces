// Author :- Tushar || 23-12-2024 12:27:09
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


void binary_lift(int node, int par, vector<vector<int>>& up,
                 vector<vector<int>>& adj) {
  up[node][0] = par;
  for (int i = 1; i < 31; i++) {
    if (up[node][i - 1] != -1)
      up[node][i] = up[up[node][i - 1]][i - 1];
    else
      up[node][i] = -1;
  }

  for (auto it : adj[node]) {
    if (it != par) {
      binary_lift(it, node, up, adj);
    }
  }
}

int query(int node, int jump_required, vector<vector<int>>& up) {
  if (node == -1 || jump_required == 0) return node;

  for (int i = 30; i >= 0; i--) {
    if (jump_required >= (1 << i)) {
      return query(up[node][i], jump_required - (1 << i), up);
    }
  }
  return node;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> adj(n + 1);
  vector<vector<int>> up(n + 1, vector<int>(32, -1));
  for (int i = 2; i <= n; i++) {
    int a;
    cin >> a;
    adj[i].push_back(a);
    adj[a].push_back(i);
  }

  binary_lift(1, -1, up, adj);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    cout << query(u, v, up) << endl;

  }

  return 0;
}

