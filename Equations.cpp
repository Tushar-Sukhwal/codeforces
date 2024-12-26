#include <bits/stdc++.h>
using namespace std;

// DSU with offset tracking
class DSU {
  vector<int> parent, rank, delta;

 public:
  DSU(int n) : parent(n), rank(n, 0), delta(n, 0) {
    iota(parent.begin(), parent.end(), 0);  // Initialize parent to itself
  }

  // Find with path compression and delta propagation
  int find(int x) {
    if (parent[x] != x) {
      int p = find(parent[x]);
      delta[x] += delta[parent[x]];  // Update delta during path compression
      parent[x] = p;
    }
    return parent[x];
  }

  // Union by rank and offset handling
  void unite(int x, int y, int k) {
    int px = find(x);
    int py = find(y);
    if (px != py) {
      if (rank[px] < rank[py]) {
        swap(px, py);
        k = -k;
      }
      parent[py] = px;
      delta[py] = k + delta[x] - delta[y];
      if (rank[px] == rank[py]) {
        rank[px]++;
      }
    }
  }

  // Query the sum of a[i] + a[j]
  int query(int x, int y) {
    if (find(x) != find(y)) return -1;
    return delta[y] - delta[x];
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, qz;
  cin >> n >> qz;

  DSU dsu(n + 1);  // 1-based indexing
  vector<int> results;

  for (int q = 0; q < qz; ++q) {
    int t;
    cin >> t;

    if (t == 1) {
      int i, j, k;
      cin >> i >> j >> k;
      dsu.unite(i, j, k);
    } else if (t == 2) {
      int i, j;
      cin >> i >> j;
      results.push_back(dsu.query(i, j));
    }
  }

  for (int res : results) {
    cout << res << "\n";
  }

  return 0;
}
