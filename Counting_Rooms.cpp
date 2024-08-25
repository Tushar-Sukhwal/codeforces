// Author :- Tushar || 22-08-2024 01:51:49
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

void bfs(vector<string>& arr, int i, int j) {
  queue<pair<int, int>> q;
  q.push({i, j});
  arr[i][j] = '#';

  vector<int> xr = {1, 0, -1, 0};
  vector<int> yr = {0, 1, 0, -1};

  while (!q.empty()) {
    auto curr = q.front();
    q.pop();

    for (int k = 0; k < 4; k++) {
      int currx = curr.first + xr[k];
      int curry = curr.second + yr[k];

      if (currx >= 0 && currx < arr.size() && curry >= 0 &&
          curry < arr[0].size() && arr[currx][curry] == '.') {
        arr[currx][curry] = '#';
        q.push({currx, curry});
      }
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;
  vector<string> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == '.') {
        bfs(arr, i, j);
        count++;
      }
    }
  }
  cout << count << endl;

  return 0;
}
