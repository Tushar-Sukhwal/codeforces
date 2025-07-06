// Author :- Tushar || 03-04-2025 23:47:05
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

void solve() {
  int n;
  cin >> n;
  map<int, int> st;
  vector<pair<int, int>> arr(n);
  for (auto &it : arr) {
    cin >> it.first >> it.second;
    st[it.first]++;
    st[it.second]++;
  }
  for (auto &it : arr) {
    if (st[it.first] > 2 || st[it.second] > 2 || it.first == it.second) {
      cout << "NO" << endl;
      return;
    }
  }

  DisjointSet ds(n + 1);
  for (auto it : arr) {
    ds.unionBySize(it.first, it.second);
  }

  for (auto it : arr) {
    if ((ds.size[ds.findUPar(it.first)] > 1 &&
         ds.size[ds.findUPar(it.first)] % 2 != 0) ||
        (ds.size[ds.findUPar(it.second)] > 1 &&
         ds.size[ds.findUPar(it.second)] % 2 != 0)) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
