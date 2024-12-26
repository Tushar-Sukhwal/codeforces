// Author :- Tushar || 15-12-2024 09:44:12
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

  for (int i = 0; i < n; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int k;
    cin >> k;
    vector<int> arr(k);
    for (int i = 0; i < k; i++) cin >> arr[i];
  }

  return 0;
}
