// Author :- Tushar || 14-04-2025 15:07:21
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

void process(int n, vector<int> &adj, vector<int> &vis, vector<int> &ans,
             vector<int> &cost) {
  int minn = cost[n];
  int mini = n;
  int temp = adj[n];

  if (cost[temp] < minn) {
    minn = cost[temp];
    mini = temp;
  }

  while (temp != n) {
    temp = adj[temp];
    if (cost[temp] < minn) {
      minn = cost[temp];
      mini = temp;
    }
  }

  temp = adj[mini];

  while (temp != mini) {
    ans.push_back(temp);
    vis[temp] = 1;
    temp = adj[temp];
  }
  ans.push_back(mini);
  vis[temp] = 1;
}

void solve() {
  int n;
  cin >> n;
  vector<int> adj(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> adj[i];
  }
  vector<int> cost(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> cost[i];
  }

  vector<int> indeg(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    indeg[adj[i]]++;
  }

  queue<int> q;
  for (int i = 1; i <= n; i++) {
    if (indeg[i] == 0) q.push(i);
  }
  vector<int> vis(n + 1, 0);

  vector<int> ans;

  while (!q.empty()) {
    auto curr = q.front();
    ans.push_back(curr);
    q.pop();
    vis[curr] = 1;

    indeg[adj[curr]]--;
    if (indeg[adj[curr]] == 0 && vis[adj[curr]] == 0) {
      q.push(adj[curr]), vis[adj[curr]] = 1;
    }
  }

  for(int i = 1; i <= n; i++) {
    if(vis[i] == 0) {
      process(i, adj, vis, ans, cost); 
    }
  }

  for (auto it : ans) cout << it << " ";
  cout << endl;
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
