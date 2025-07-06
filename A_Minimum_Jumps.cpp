// Author :- Tushar || 28-01-2025 10:02:01
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

  int s, d;
  cin >> s >> d;

  vector<int> vis(n + 1, 0);

  queue<int> q;
  q.push(s);
  vis[s] = 1;

  int flag = 0;
  int ans = 0;
  while (!q.empty()) {
    int size = q.size();
    for (int i = 0; i < size; i++) {
      auto curr = q.front();
      q.pop();

      if (curr == d) {
        flag = 1;
        break;
      }

      for (auto it : adj[curr]) {
        if (vis[it] == 0) {
          q.push(it);
          vis[it] = 1;
        }
      }
    }
    ans++;
  }

  if (flag)
    cout << ans - 1;
  else
    cout << 0;

  return 0;
}
