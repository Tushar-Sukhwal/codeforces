// clang-format off
// Author :- Tushar || 11-08-2024 21:24:10
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

void dfs(int n, vector<vector<int>>& adj, int p, vector<int>& ans,
         vector<int>& order) {
  order.push_back(n);
  if (adj[n].size() == 0) {
    ans.push_back(n);
    return;
  }

  for (auto it : adj[n]) {
    dfs(it, adj, n, ans, order);
  }
}

int check(vector<int>& per, map<int, int>& mp, vector<int>& order) {
  
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
      int a;
      cin >> a;
      adj[a].push_back(i + 2);
    }

    vector<int> per(n);
    for (int i = 0; i < n; i++) cin >> per[i];

    vector<int> ans, order;
    dfs(1, adj, -1, ans, order);
    debug(order);
    debug(ans);

    map<int, int> mp;
    for (int i = 0; i < ans.size(); i += 2) {
      mp[ans[i]] = ans[i + 1];
      mp[ans[i + 1]] = ans[i];
    }
    for (int i = 0; i < q; i++) {
      int l, r;
      cin >> l >> r;
      swap(per[l - 1], per[r - 1]);
    }
  }

  return 0;
}
