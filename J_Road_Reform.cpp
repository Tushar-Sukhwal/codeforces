// Author :- Tushar || 08-09-2024 13:08:22
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
class DisjointSet {
 public:
  vector<int> rank, parent, size;
  DisjointSet(int n) {
    rank.resize(n + 1, 0);
    parent.resize(n + 1);
    size.resize(n + 1);
    for (int i = 0; i <= n; i++) {
      parent[i] = i;
      size[i] = 1;
    }
  }
  int findUPar(int node) {
    if (node == parent[node]) return node;
    return parent[node] = findUPar(parent[node]);
  }
  void unionByRank(int u, int v) {
    int ulp_u = findUPar(u);
    int ulp_v = findUPar(v);
    if (ulp_u == ulp_v) return;
    if (rank[ulp_u] < rank[ulp_v]) {
      parent[ulp_u] = ulp_v;
    } else if (rank[ulp_u] > rank[ulp_v]) {
      parent[ulp_v] = ulp_u;
    } else {
      parent[ulp_v] = ulp_u;
      rank[ulp_u]++;
    }
  }
  void unionBySize(int u, int v) {
    int ulp_u = findUPar(u);
    int ulp_v = findUPar(v);
    if (ulp_u == ulp_v) return;
    if (size[ulp_u] < size[ulp_v]) {
      parent[ulp_u] = ulp_v;
      size[ulp_v] += size[ulp_u];
    } else {
      parent[ulp_v] = ulp_u;
      size[ulp_u] += size[ulp_v];
    }
  }
};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<pair<int, int>>> adj(n + 1);
    vector<pair<int, pair<int, int>>> edges;

    int clo = INT_MAX;
    int ret = 0;
    for (int i = 0; i < m; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      edges.push_back({w, {u, v}});
      adj[u].push_back({v, w});
      adj[v].push_back({u, w});
      if (abs(w - k) < clo) {
        clo = abs(w - k);
        ret = w;
      }
    }
    DisjointSet ds(n + 1);
    sort(edges.begin(), edges.end());

    for (int i = 0; i < m; i++) {
      if (edges[i].first <= k) {
        ds.unionBySize(edges[i].second.first, edges[i].second.second);
      }
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
      if (ds.findUPar(edges[i].second.first) !=
          ds.findUPar(edges[i].second.second)) {
        ds.unionBySize(edges[i].second.first, edges[i].second.second);
        ans += edges[i].first - k;
      }
    }
    if(ans) cout << ans << endl; 
    else cout << clo << endl; 
  }

  return 0;
}
