// clang-format off
// Author :- Tushar || 04-08-2024 23:37:01
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO\n";
#define yes cout << "YES\n";
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

void dfs(vector<vector<int>>& adj, vector<int>& vis, int node) {
  vis[node] = 1;
  for (auto it : adj[node]) {
    if (!vis[it]) {
      dfs(adj, vis, it);
    }
  }
}

int32_t main() {
  fastio;

  int n, m;
  cin >> n >> m;
  vector<vector<int>> adj(n + 1);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int count = 0;
  vector<int> vis(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      count++;
      dfs(adj, vis, i);
      if (count == 2) break;
    }
  }

  if (n == m && count < 2) {
    cout << "FHTAGN!" << endl;
  } else {
    no
  }

  return 0;
}
 