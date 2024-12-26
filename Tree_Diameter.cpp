// Author :- Tushar || 09-09-2024 03:23:40
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

  queue<pair<int, int>> q;
  vector<int> vis(n + 1, 0);
  // node, dist
  q.push({1, 1});
  vis[1] = 1;

  auto ans = q.front();

  while (!q.empty()) {
    auto curr = q.front();
    q.pop();

    if (ans.second < curr.second) ans = curr;

    for (auto it : adj[curr.first]) {
      if (vis[it] == 0) {
        vis[it] = 1;
        q.push({it, curr.second + 1});
      }
    }
  }

  q.push({ans.first, 1});

  vector<int> temp(n + 1, 0);
  vis = temp;
  vis[ans.first] = 1;



  while (!q.empty()) {
    auto curr = q.front();
    q.pop();

    if (ans.second < curr.second) ans = curr;

    for (auto it : adj[curr.first]) {
      if (vis[it] == 0) {
        vis[it] = 1;
        q.push({it, curr.second + 1});
      }
    }
  }

  cout << ans.second - 1 << endl;

  return 0;
}