// Author :- Tushar || 29-12-2024 19:00:01
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

vector<int> ind;
bool comp(int a, int b) { return ind[a] < ind[b]; }

vector<int> bfs(vector<vector<int>>& adj) {
  queue<pair<int, int>> q;
  // node, par;

  q.push({1, -1});

  vector<int> arr;

  while (!q.empty()) {
    auto curr = q.front();
    q.pop();
    arr.push_back(curr.first);

    for (auto it : adj[curr.first]) {
      if (it != curr.second) {
        q.push({it, curr.first});
      }
    }
  }
  return arr;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<vector<int>> adj(n + 1);

  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  ind.resize(n + 1);
  vector<int> order(n);
  for (int i = 0; i < n; i++) {
    cin >> order[i];
    ind[order[i]] = i;
  }

  for (int i = 0; i < adj.size(); i++) sort(adj[i].begin(), adj[i].end(), comp);

  auto temp = bfs(adj);
  if (temp == order)
    cout << "Yes\n";
  else
    cout << "No\n";

  return 0;
}
