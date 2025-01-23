// Author :- Tushar || 15-01-2025 00:23:09
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

  int ans = 0;
  for (auto it : adj) {
    ans = max(ans, (int)(it.size() + 1));
  }
  vector<int> color(n + 1);
  color[1] = 1;

  // node, par
  queue<pair<int, int>> q;

  int mark = 2;
  for (auto it : adj[1]) {
    if (it != 1) {
      color[it] = mark;
      mark++;
      q.push({it, 1});
    }
  }

  while (!q.empty()) {
    auto curr = q.front();
    q.pop();

    int mark = 1;
    for (auto it : adj[curr.first]) {
      if (mark == color[curr.first] || mark == color[curr.second]) mark++;
      if (mark == color[curr.first] || mark == color[curr.second]) mark++;
      if (it != curr.second) {
        q.push({it, curr.first});
        color[it] = mark;
        mark++;
      }
    }
  }

  cout << ans << endl;
  for (int i = 1; i <= n; i++) cout << color[i] << " ";
  cout << endl;

  return 0;
}
