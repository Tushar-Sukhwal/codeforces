// Author :- Tushar || 22-08-2024 10:44:22
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

void dfs(pair<int, int> curr, vector<string>& arr, string& str, string& ans) {
  if (arr[curr.first][curr.second] == 'B') {
    if (ans.empty() || ans.size() > str.size()) ans = str;
    return;
  }
  if (arr[curr.first][curr.second] == '#') return;

  arr[curr.first][curr.second] = '#';

  vector<int> xr = {0, -1, 0, 1};
  vector<int> yr = {1, 0, -1, 0};
  vector<char> zr = {'R', 'U', 'L', 'D'};

  for (int i = 0; i < 4; i++) {
    int currx = curr.first + xr[i];
    int curry = curr.second + yr[i];

    if (currx >= 0 && currx < arr.size() && curry >= 0 &&
        curry < arr[0].size()) {
      if (arr[currx][curry] == '.' || arr[currx][curry] == 'B') {
        str.push_back(zr[i]);
        dfs({currx, curry}, arr, str, ans);
        str.pop_back();
      }
    }
  }

  arr[curr.first][curr.second] = '.';  // Backtrack to reset the state
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<string> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  string temp = "", ans = "";

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 'A') {
        dfs({i, j}, arr, temp, ans);
      }
    }
  }
  if (!ans.empty()) {
    cout << "YES\n";
    cout << ans.size() << "\n";
    cout << ans << '\n';
  } else {
    cout << "NO\n";
  }

  return 0;
}
