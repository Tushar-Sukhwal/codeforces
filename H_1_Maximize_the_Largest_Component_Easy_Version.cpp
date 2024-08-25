// Author :- Tushar || 23-08-2024 18:12:21
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif
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
    int n, m;
    cin >> n >> m;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    DisjointSet ds(n * m);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] == '#') {
          if (i + 1 < n && arr[i + 1][j] == '#') {
            ds.unionBySize(i * m + j, (i + 1) * m + j);
          }
          if (j + 1 < m && arr[i][j + 1] == '#') {
            ds.unionBySize(i * m + j, i * m + j + 1);
          }
        }
      }
    }
    int maxx = 0;

    for (int i = 0; i < n; i++) {
      int count = 0;
      set<int> st;
      for (int j = 0; j < m; j++) {
        if (arr[i][j] == '#') {
          int upar = ds.findUPar(i * m + j);
          if (!st.count(upar)) {
            st.insert(upar);
            count += ds.size[upar];
          }
        } else {
          count++;
          if (i + 1 < n && arr[i + 1][j] == '#') {
            int upar = ds.findUPar((i + 1) * m + j);
            if (!st.count(upar)) {
              st.insert(upar);
              count += ds.size[upar];
            }
          }
          if (i - 1 >= 0 && arr[i - 1][j] == '#') {
            int upar = ds.findUPar((i - 1) * m + j);
            if (!st.count(upar)) {
              st.insert(upar);
              count += ds.size[upar];
            }
          }
        }
        maxx = max(maxx, count);
      }
    }

    for (int j = 0; j < m; j++) {
      int count = 0;
      set<int> st;
      for (int i = 0; i < n; i++) {
        if (arr[i][j] == '#') {
          int upar = ds.findUPar(i * m + j);
          if (!st.count(upar)) {
            st.insert(upar);
            count += ds.size[upar];
          }
        } else {
          count++;
          if (j + 1 < m && arr[i][j + 1] == '#') {
            int upar = ds.findUPar(i * m + j + 1);
            if (!st.count(upar)) {
              st.insert(upar);
              count += ds.size[upar];
            }
          }
          if (j - 1 >= 0 && arr[i][j - 1] == '#') {
            int upar = ds.findUPar(i * m + j - 1);
            if (!st.count(upar)) {
              st.insert(upar);
              count += ds.size[upar];
            }
          }
        }
        maxx = max(maxx, count);
      }
    }

    cout << maxx << endl;
  }

  return 0;
}
