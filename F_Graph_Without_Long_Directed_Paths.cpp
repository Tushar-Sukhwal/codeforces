// Author :- Tushar || 18-12-2024 03:12:27
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

  vector<pair<int, int>> arr(m);
  for (int i = 0; i < m; i++) {
    cin >> arr[i].first;
    cin >> arr[i].second;
    adj[arr[i].first].push_back(arr[i].second);
    adj[arr[i].second].push_back(arr[i].first);
  }

  vector<int> col(n + 1, 0);
  // 1 & 2
  queue<pair<int, int>> q;
  // node , color
  q.push({1, 1});
  int flag = 0;

  col[1] = 1;
  while (!q.empty()) {
    int node = q.front().first;
    int cc = q.front().second;
    int color;

    if (cc == 1)
      color = 2;
    else
      color = 1;

    q.pop();

    for (auto it : adj[node]) {
      if (col[it] == 0) {
        col[it] = color;
        q.push({it, color});
      } else {
        if (col[it] != color) flag = 1;
      }
    }
    if (flag) break;
  }

  if (flag) {
    cout << "NO";
    return 0;
  }

  cout << "YES\n";

  for (int i = 0; i < m; i++) {
    if (col[arr[i].first] == 1)
      cout << 1;
    else
      cout << 0;
  }

  return 0;
}
