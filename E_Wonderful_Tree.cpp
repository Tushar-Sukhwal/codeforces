// clang-format off
// Author :- Tushar || 04-07-2024 09:38:57
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
// clang-format on

// int recc(int curr, int& ans) {}

int calcHeight(int i, vector<int>& height, vector<vector<int>>& adj) {
  int curr = INT_MAX;

  for (auto it : adj[i]) {
    curr = min(curr, calcHeight(it, height, adj));
  }
  if (curr == INT_MAX) curr = 0;
  height[i] = curr + 1;
  cerr << i << " " << curr << endl;
  return height[i];
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++) {
      int a;
      cin >> a;
      adj[a - 1].push_back(i + 1);
    }
    vector<int> height(n);
    calcHeight(0, height, adj);
    debug(height);
    debug(adj);
  }

  return 0;
}
