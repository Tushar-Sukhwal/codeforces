// Author :- Tushar || 21-08-2024 16:07:27
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif
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

  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<pair<int, int>> b;
    int g = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] == 'B') b.push_back({i, j});
        if (arr[i][j] == 'G') g++;
      }
    }

    if (g == 0) {
      cout << "YES\n";
      continue;
    }

    vector<int> xr = {1, 0, -1, 0};
    vector<int> yr = {0, -1, 0, 1};

    bool flag = false;


    for (auto& p : b) {
      for (int j = 0; j < 4; j++) {
        int currx = p.first + xr[j];
        int curry = p.second + yr[j];
        if (currx >= 0 && currx < n && curry >= 0 && curry < m) {
          if (arr[currx][curry] == 'G') {
            flag = true;
          } else if (arr[currx][curry] == '.') {
            arr[currx][curry] = '#';
          }
        }
      }
    }

    if (flag) {
      cout << "NO\n";
      continue;
    }


    queue<pair<int, int>> q;
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    if (arr[n - 1][m - 1] != '#') {
      q.push({n - 1, m - 1});
      vis[n - 1][m - 1] = true;
    }

    while (!q.empty()) {
      auto [x, y] = q.front();
      q.pop();
      for (int j = 0; j < 4; j++) {
        int currx = x + xr[j];
        int curry = y + yr[j];
        if (currx >= 0 && currx < n && curry >= 0 && curry < m &&
            !vis[currx][curry] && arr[currx][curry] != '#') {
          vis[currx][curry] = true;
          q.push({currx, curry});
        }
      }
    }


    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (arr[i][j] == 'G' && !vis[i][j]) {
          flag = true;
          break;
        }
      }
      if (flag) break;
    }

    if (flag)
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}
