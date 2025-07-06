// Author :- Tushar || 25-06-2025 21:13:50
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
  int n;
  cin >> n;

  vector<int> arr(n);
  for (auto &it : arr) cin >> it;

  set<int> st; //cost 
  vector<int> node; 

  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;

    if()

    adj[u].push_back(v);
    adj[v].push_back(u);
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
