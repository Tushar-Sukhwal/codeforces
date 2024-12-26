// Author :- Tushar || 14-12-2024 10:34:03
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

  int n, m;
  cin >> n >> m;
  vector<vector<int>> adj(n + 1);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<int> vis(n + 1, 0);

  queue<int> q;
  q.push(1);

  while (!q.empty()) {
    int curr = q.front();
    q.pop();

    for (auto it : adj[curr]) {
      if (vis[it] == 0) {
        vis[it] = curr;
        q.push(it);
      }
    }
  }

  vector<int> ans;

  int curr = n;
  ans.push_back(n);

  int flag = 0;

  while (true) {
    if (curr == 1) {
      flag = 1;
      break;
    }
    if (curr == 0) {
      break;
    }

    curr = vis[curr];
    ans.push_back(curr);
  }

  if (flag == 0) {
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }
  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (auto it : ans) cout << it << " ";

  return 0;
}
