// clang-format off
// Author :- Tushar || 30-07-2024 11:43:24
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);

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

void output(queue<int>& q, int a) {
  int curr = q.front();
  q.pop();

  cout << curr << " " << a << endl;
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    int flag = 0;
    queue<int> a, b;
    vector<int> vis(n + 1, 0);

    queue<pair<int, int>> q;
    // vertex,color
    q.push({1, 1});
    vis[1] = 1;
    while (!q.empty()) {
      auto curr = q.front();
      q.pop();
      if (vis[curr.first] != 0 && curr.first != 1) continue;
      if (curr.second == 1)
        a.push(curr.first);
      else
        b.push(curr.first);
      vis[curr.first] = curr.second;
      int color;
      if (curr.second == 1)
        color = 2;
      else
        color = 1;

      for (auto it : adj[curr.first]) {
        if (vis[it] != 0) {
          if (vis[it] != color) {
            flag = 1;
            break;
          }
        } else {
          q.push({it, color});
        }
      }
      if (flag) break;
    }
    if (flag) {
      cout << "Alice" << endl;
      int a, b;
      for (int i = 0; i < n; i++) {
        int t1 = 1, t2 = 2;
        cout << t1 << " " << t2 << endl;
        cin >> a >> b;
      }
    } else {
      cout << "Bob" << endl;
      for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;

        int x = 6 - u - v;

        if (a.empty()) {
          if (x == 1) output(b, 2);
          if (x == 2) output(b, 3);
          if (x == 3) output(b, 2);
        } else if (b.empty()) {
          if (x == 1) output(a, 3);
          if (x == 2) output(a, 1);
          if (x == 3) output(a, 1);
        } else {
          if (x == 2) output(a, 1);
          if (x == 1) output(b, 2);
          if (x == 3) output(a, 1);
        }
      }
    }
  }

  return 0;
}
