// clang-format off
// Author :- Tushar || 04-08-2024 17:14:01
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007; 
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
  */
// clang-format on

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
  fastio;
  //
  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> edges;
  vector<int> times(n + 1, 0);
  DisjointSet ds(n + 1);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    times[u]++;
    times[v]++;
    edges.push_back({u, v});
    ds.unionBySize(u, v);
  }
  map<int, int> mp;
  set<int> nah;
  for (auto it : edges) {
    mp[ds.findUPar(it.first)]++;
    if (times[it.first] != 2 || times[it.second] != 2)
      nah.insert(ds.findUPar(it.first));
  }
  int count = 0;

  for (auto it = mp.begin(); it != mp.end(); it++) {
    if (ds.size[it->first] >= 3 && ds.size[it->first] == it->second) {
      if (!nah.count(it->first)) count++;
    }
  }

  cout << count << endl;

  return 0;
}
