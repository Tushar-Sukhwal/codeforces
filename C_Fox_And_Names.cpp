// Author :- Tushar || 07-02-2025 15:49:34
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

vector<int> kahntopo(vector<bool>& vis, vector<vector<int>>& gp) {
  int n = gp.size();
  vector<int> degree(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < gp[i].size(); j++) {
      degree[gp[i][j]]++;
    }
  }
  queue<int> q;
  for (int i = 0; i < n; i++) {
    if (degree[i] == 0) {
      q.push(i);
    }
  }
  vector<int> topo;
  while (!q.empty()) {
    int node = q.front();
    topo.push_back(q.front());
    q.pop();
    for (auto child : gp[node]) {
      degree[child]--;
      if (degree[child] == 0) {
        q.push(child);
      }
    }
  }
  return topo;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<vector<int>> adj(26);

  int n;
  cin >> n;
  vector<string> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  vector<bool> vis(26, false);
  int flag2 = 0;

  for (int i = 1; i < n; i++) {
    int flag = 0;
    for (int j = 0; j < arr[i].size() && j < arr[i - 1].size(); j++) {
      if (arr[i][j] != arr[i - 1][j]) {
        flag = 1;
        adj[arr[i - 1][j] - 'a'].push_back(arr[i][j] - 'a');
        break;
      }
    }
    if (flag == 0 && arr[i].size() < arr[i - 1].size()) {
      flag2 = 1;
      break;
    }
  }

  auto ans = kahntopo(vis, adj);
  if (ans.size() == 26 && !flag2)
    for (auto it : ans) cout << (char)(it + 'a');
  else
    cout << "Impossible";

  return 0;
}
