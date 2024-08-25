// clang-format off
// Author :- Tushar || 30-07-2024 12:32:51
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

void dfs(vector<pair<int, int>>& ans, vector<vector<int>>& vis,
         vector<string>& arr, int x, int y, int& k) {
  if (vis[x][y]) return;
  vis[x][y] = 1;

  vector<int> xr = {1, 0, -1, 0};
  vector<int> yr = {0, -1, 0, 1};

  for (int i = 0; i < 4; i++) {
    int currx = x + xr[i];
    int curry = y + yr[i];

    if (currx >= 0 && currx < arr.size() && curry >= 0 &&
        curry < arr[0].size()) {
      if (arr[currx][curry] == '.') dfs(ans, vis, arr, currx, curry, k);
    }
  }

  if (k > 0) {
    k--;
    ans.push_back({x, y});
  }
}

int32_t main() {
  fastio;
  //
  int n, m, k;
  cin >> n >> m >> k;

  vector<string> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  vector<vector<int>> vis(n, vector<int>(m, 0));

  int x, y;
  int flag = 0;
  vector<pair<int, int>> ans;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] == '.') {
        x = i;
        y = j;
        flag = 1;
        break;
      }
    }`
  }
  dfs(ans, vis, arr, x, y, k);

  for (int i = 0; i < ans.size(); i++) {
    arr[ans[i].first][ans[i].second] = 'X';
  }

  for (auto it : arr) {
    for (auto itt : it) cout << itt ;
    cout << endl;
  }

  return 0;
}
