// Author :- Tushar || 15-01-2025 01:50:00
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

  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    if (n == 1) {
      cout << 0 << endl;
      continue;
    }
    vector<int> indeg(n + 1, 0);
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
      indeg[u]++;
      indeg[v]++;
    }
    queue<int> q;
    for (int i = 1; i < n + 1; i++) {
      if (indeg[i] == 1) q.push(i);
    }

    vector<int> marked(n + 1, 0);
    int count = 0;
    while (k--) {
      int size = q.size();
      for (int i = 0; i < size; i++) {
        count++;
        int curr = q.front();
        marked[curr] = 1;
        q.pop();
        indeg[curr] = 0;
        for (auto it : adj[curr]) {
          if (indeg[it] != 0) {
            indeg[it]--;
            if (indeg[it] == 1) q.push(it);
          }
        }
      }
      if (q.size() == 0) break;
    }

    int flag = 0;
    for (int i = 1; i < n + 1; i++) {
      if (marked[i] == 0 && indeg[i] == 0) flag = 1;
    }

    if (flag && k > 1)
      cout << 0 << endl;
    else
      cout << n - count << endl;
  }

  return 0;
}
