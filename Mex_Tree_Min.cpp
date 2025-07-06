// Author :- Tushar || 02-07-2025 20:36:17
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

int calc(vector<vector<int>>& adj, int u) {
  queue<pair<int, int>> q;
  q.push({u, -1});

  int dist = 0;
  while (!q.empty()) {
    int size = q.size();

    for (int i = 0; i < size; i++) {
      auto curr = q.front();
      q.pop();

      for (auto it : adj[curr.first]) {
        if (it != curr.second) {
          if (adj[it].size() == 1) return dist;
          q.push({it, curr.first});
        }
      }
    }
    dist++;
  }
  return dist;
}

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int minn = INT_MAX;
  for (int i = 1; i <= n; i++) {
    if (adj[i].size() == 1) {
      int dist = calc(adj, i);
      minn = min(dist, minn);
    }
  }

  if (minn + 2 == n) {
    cout << 2 * n - 1 << endl;
  } else {
    cout << n - 1 + 2 << endl;
  }
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
