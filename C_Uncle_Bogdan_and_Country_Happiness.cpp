// Author :- Tushar || 10-02-2025 22:39:28
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

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> arr(n);
  for (auto &it : arr) cin >> it;
  vector<int> h(n);
  for (auto &it : h) cin >> it;
  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[v].push_back(u);
    adj[u].push_back(v);
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
