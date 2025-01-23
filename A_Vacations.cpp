// Author :- Tushar || 11-01-2025 12:25:13
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

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &it : arr) cin >> it;

  vector<vector<int>> dp(n + 1, vector<int>(3, 1e9));
  // 0 rest , 1gym , 2contest

  dp[0][0] = 1;

  if (arr[0] == 1) dp[0][2] = 0;
  if (arr[0] == 2) dp[0][1] = 0;
  if (arr[0] == 3) dp[0][1] = dp[0][2] = 0;

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      dp[i][0] = min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + 1;

      if (arr[i] == 1) dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
      if (arr[i] == 2) dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
      if (arr[i] == 3) {
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
      }
    }
  }

  cout << min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;

  return 0;
}
