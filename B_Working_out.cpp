// Author :- Tushar || 14-04-2025 16:03:41
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
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n, vector<int>(m));
  for (auto &it : arr) {
    for (auto &itt : it) cin >> itt;
  }

  vector<vector<int>> dp1(n, vector<int>(m, 0));
  vector<vector<int>> dp2(n, vector<int>(m, 0));
  vector<vector<int>> pp1(n, vector<int>(m, 0));
  vector<vector<int>> pp2(n, vector<int>(m, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == 0 && j == 0)
        dp1[i][j] = arr[i][j];
      else if (i == 0)
        dp1[i][j] = dp1[i][j - 1] + arr[i][j];
      else if (j == 0)
        dp1[i][j] = dp1[i - 1][j] + arr[i][j];
      else {
        dp1[i][j] = max(dp1[i][j - 1], dp1[i - 1][j]) + arr[i][j];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = m - 1; j >= 0; j--) {
      if (i == 0 && j == m - 1)
        pp1[i][j] = arr[i][j];
      else if (i == 0)
        pp1[i][j] = pp1[i][j + 1] + arr[i][j];
      else if (j == m - 1)
        pp1[i][j] = pp1[i - 1][j] + arr[i][j];
      else {
        pp1[i][j] = max(pp1[i][j + 1], pp1[i - 1][j]) + arr[i][j];
      }
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = m - 1; j >= 0; j--) {
      if (i == n - 1 && j == m - 1)
        dp2[i][j] = arr[i][j];
      else if (i == n - 1)
        dp2[i][j] = dp2[i][j + 1] + arr[i][j];
      else if (j == m - 1)
        dp2[i][j] = dp2[i + 1][j] + arr[i][j];
      else
        dp2[i][j] = max(dp2[i + 1][j], dp2[i][j + 1]) + arr[i][j];
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j < m; j++) {
      if (i == n - 1 && j == 0)
        pp2[i][j] = arr[i][j];
      else if (i == n - 1)
        pp2[i][j] = pp2[i][j - 1] + arr[i][j];
      else if (j == 0)
        pp2[i][j] = pp2[i + 1][j] + arr[i][j];
      else
        pp2[i][j] = max(pp2[i + 1][j], pp2[i][j - 1]) + arr[i][j];
    }
  }
  int maxx = 0;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < m - 1; j++) {
      int ans1 = dp1[i - 1][j] + dp2[i + 1][j] + pp1[i][j + 1] + pp2[i][j - 1];
      int ans2 = dp1[i][j - 1] + dp2[i][j + 1] + pp1[i - 1][j] + pp2[i + 1][j];
      maxx = max({ans1, ans2, maxx});
    }
  }
  cout << maxx << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 1;
  // cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
