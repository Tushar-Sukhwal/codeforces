// clang-format off
// Author :- Tushar || 04-08-2024 17:58:44
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
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

int32_t main() {
  fastio;
  //
  int n;
  cin >> n;
  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < n; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<int> ans;
  queue<int> q;
  q.push(1);
  vector<int> vis(n + 1, 0);

  int count = 0;

  while (!q.empty()) {
    int size = q.size();
    for (int i = 0; i < size; i++) {
      int curr = q.front();
      q.pop();
      if (vis[curr] == 0) {
        vis[curr] = 1;
        int flag = 0;
        for (auto it : adj[curr]) {
          if (vis[it] == 0) {
            flag = 1;
            q.push(it);
          }
        }
        if (flag == 0) ans.push_back(count);
      }
    }
    count++;
  }
  int sum = 0;
  for (auto it : ans) sum += it ;
  double out = (double)sum / (double)ans.size();
  cout << out << endl;

  return 0;
}
