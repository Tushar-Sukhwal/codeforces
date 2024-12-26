// Author :- Tushar || 18-12-2024 02:01:00
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

void dfs(int node, int par, vector<vector<int>>& adj, vector<int>& arr,
         int count, int& ans, int m) {
  if (arr[node] == 1) {
    count++;
  } else {
    count = 0; 
  }
  if (count > m) {
    return;
  }

  for(auto it : adj[node]) {
    if(it != par) {
      dfs(it, node, adj, arr, count, ans, m); 
    }
  }
  
  if(adj[node].size() == 1 && node != 1) ans++; 
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<int> arr(n + 1);
  for (int i = 1; i < n + 1; i++) cin >> arr[i];

  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int ans = 0; 
  dfs(1, 0, adj, arr, 0, ans, m); 

  cout << ans << endl; 

  return 0;
}
