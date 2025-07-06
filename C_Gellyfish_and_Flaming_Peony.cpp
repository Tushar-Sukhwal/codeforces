// Author :- Tushar || 31-05-2025 20:29:31
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

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &it : arr) cin >> it;

  int g = 0;
  for (auto it : arr) {
    g = __gcd(g, it);
  }

  int cnt = 0;
  for (auto it : arr)
    if (it == g) cnt++;

  if (cnt > 0) {
    cout << n - cnt << endl;
    return;
  }

  vector<int> ele;
  set<int> st;
  for (auto it : arr) {
    if (!st.count(it)) {
      ele.push_back(it);
      st.insert(it);
    }
  }

  vector<int> dist(5001, 1e9);
  vector<bool> vis(5001, false);
  queue<int> q;

  for (int it : ele) {
    dist[it] = 0;
    vis[it] = true;
    q.push(it);
  }

  while (!q.empty()) {
    auto curr = q.front();
    q.pop();

    if (curr == g) {
      cout << dist[curr] + (n - 1) << endl;
      return;
    }

    for (auto it : ele) {
      int temp = __gcd(curr, it);
      if (!vis[temp]) {
        vis[temp] = true;
        dist[temp] = dist[curr] + 1;
        q.push(temp);
      }
    }
  }
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
