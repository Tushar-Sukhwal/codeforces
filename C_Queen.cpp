// Author :- Tushar || 15-01-2025 10:43:10
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
  vector<int> res(n + 1, 0);
  int root;
  for (int i = 1; i < n + 1; i++) {
    int par, temp;
    cin >> par >> temp;
    res[i] = temp;
    if (par == -1) {
      root = i;
      continue;
    }
    adj[par].push_back(i);
  }
  set<int> st;

  for (int i = 1; i < n + 1; i++) {
    int flag = 0;
    if (res[i]) {
      for (auto it : adj[i]) {
        if (res[it] == 0) {
          flag = 1;
          break;
        }
      }
      if (flag == 0) st.insert(i);
    }
  }

  if (st.size())
    for (auto it : st) cout << it << " ";
  else
    cout << -1;

  return 0;
}
