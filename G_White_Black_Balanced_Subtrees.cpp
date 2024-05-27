// Author :- Tushar
// Date:- 2024-04-11 19:21:32
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define letsgooooooooooo            \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define test         \
  int Tushars_07;    \
  cin >> Tushars_07; \
  while (Tushars_07--)
#define endl "\n"
#define no cout << "NO \n";
#define yes cout << "YES \n";
// const ll mod = 1000000007;
// const ll mod = 998244353;

string str;
pair<int, int> dfs(vector<vector<int>>& adj, vector<int>& vis, int n,
                   int& count) {
  if (vis[n] == 1) return {0, 0};

  vis[n] = 1;
  int b = 0;
  int w = 0;
  for (auto it : adj[n]) {
    if (vis[it] == 0) {
      auto curr = dfs(adj, vis, it, count);
      b += curr.first;
      w += curr.second;
    }
  }
  if (str[n - 1] == 'W')
    w++;
  else
    b++;
  if (b == w && b != 0) {
    count++;
  }
  // cout << "b->" << b << " w->" << w << " n->" << n << endl;
  return {b, w};
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
      int a;
      cin >> a;
      adj[a].push_back(i + 2);
    }
    cin >> str;
    vector<int> vis(n + 1, 0);
    int count = 0;
    auto it = dfs(adj, vis, 1, count);

    cout << count << endl;
  }

  return 0;
}
