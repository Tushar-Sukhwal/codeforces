// Author :- Tushar || 26-12-2024 11:12:35
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
  for (int i = 2; i <= n; i++) {
    int a;
    cin >> a;
    adj[a].push_back(i);
    adj[i].push_back(a);
  }

  queue<int> q;
  q.push(1);
  vector<int> vis(n + 1, 0);
  vis[1] = 1;

  int ans = 0;
  while (!q.empty()) {
    int size = q.size();
    if (size % 2 != 0) ans++;

    for(int i = 0; i < size; i++) {
      int curr = q.front(); 
      q.pop(); 

      for(auto it : adj[curr]) {
        if(vis[it] == 0) {
          q.push(it); 
          vis[it] = 1; 
        }
      }
    }
  }

  cout << ans << endl; 

  return 0;
}
