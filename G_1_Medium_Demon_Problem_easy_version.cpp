// Author :- Tushar || 15-12-2024 21:05:51
#include <bits/stdc++.h>
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

void dfs(int node, vector<int>& adj, vector<int>& pathvis, int& flag,
         int& count, vector<int>& st) {
  if (pathvis[node] != 0) {
    flag = node;
    return;
  }
  pathvis[node] = 1;
  if (st[node]) {
    flag = -2;
    count++;
    return;
  }

  dfs(adj[node], adj, pathvis, flag, count, st);

  if (flag != -2 && flag != 0) st[node] = 1;
  if (flag == node) flag = -2;
  if (flag == -2) count++;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<int> indeg(n + 1, 0);
    for (int i = 1; i <= n; i++) indeg[arr[i]]++;
    vector<int> st(n + 1, 0);

    int ans = 0;
    for (int i = 1; i <= n; i++) {
      if (indeg[i] == 0) {
        vector<int> pathvis(n + 1, 0);
        int flag = 0;
        int count = 0;
        dfs(i, arr, pathvis, flag, count, st);
        ans = max(ans, count);
      }
    }
    if (ans + 1 == 1)
      cout << 2 << endl;
    else
      cout << ans + 1 << endl;
  }

  return 0;
}
