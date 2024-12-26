// Author :- Tushar || 23-12-2024 14:28:17
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

class LCA {
 private:
  vector<vector<int>> up;
  vector<int> tin, tout, depth;
  int n, timer, L;

  void dfs(int node, int parent, vector<vector<int>>& adj) {
    tin[node] = ++timer;
    up[node][0] = parent;

    // Build binary lifting table
    for (int i = 1; i < L; i++) {
      up[node][i] = up[up[node][i - 1]][i - 1];
    }

    // Process children
    for (int child : adj[node]) {
      if (child != parent) {
        depth[child] = depth[node] + 1;
        dfs(child, node, adj);
      }
    }

    tout[node] = ++timer;
  }

  bool is_ancestor(int u, int v) {
    return tin[u] <= tin[v] && tout[u] >= tout[v];
  }

  int get_lca(int u, int v) {
    if (is_ancestor(u, v)) return u;
    if (is_ancestor(v, u)) return v;

    for (int i = L - 1; i >= 0; i--) {
      if (!is_ancestor(up[u][i], v)) {
        u = up[u][i];
      }
    }
    return up[u][0];
  }

 public:
  // Initialize with number of nodes and adjacency list
  // Note: Works for both 0-indexed and 1-indexed
  LCA(int nodes, vector<vector<int>>& adj, int root = 0) {
    n = nodes;
    timer = 0;
    L = ceil(log2(n)) + 1;

    up.assign(n, vector<int>(L));
    tin.resize(n);
    tout.resize(n);
    depth.assign(n, 0);

    dfs(root, root, adj);
  }

  // Get LCA of two nodes
  int get_lca_nodes(int u, int v) { return get_lca(u, v); }

  // Get distance between two nodes
  int get_distance(int u, int v) {
    int lca = get_lca(u, v);
    return depth[u] + depth[v] - 2 * depth[lca];
  }

  // Lift node u by k levels
  int lift_node(int u, int k) {
    if (k > depth[u]) return -1;

    for (int i = L - 1; i >= 0; i--) {
      if (k >= (1 << i)) {
        u = up[u][i];
        k -= (1 << i);
      }
    }
    return u;
  }

  // Get kth ancestor of node u
  int get_kth_ancestor(int u, int k) { return lift_node(u, k); }

  // Get node level/depth
  int get_depth(int node) { return depth[node]; }
};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, q;
  cin >> n >> q;

  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  LCA lca(n + 1, adj, 1);
  for (int i = 0; i < q; i++) {
    int u, v;
    cin >> u >> v;
    int l = lca.get_lca_nodes(u, v);
    cout << abs(lca.get_depth(l) - lca.get_depth(u)) +
                abs(lca.get_depth(l) - lca.get_depth(v))
         << endl;
  }

  return 0;
}
