// Author :- Tushar || 24-12-2024 18:46:10
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

  int n, m;
  cin >> n >> m;
  vector<int> price(n);
  for (int i = 0; i < n; i++) cin >> price[i];
  vector<int> pages(n);
  for (int i = 0; i < n; i++) cin >> pages[i];

  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j <= m; j++) {
      if (j - price[i] >= 0)
        dp[i][j] = max(dp[i][j], dp[i + 1][j - price[i]] + pages[i]);

      if (i + 1 < n) dp[i][j] = max(dp[i][j], dp[i + 1][j]);
    }
  }

  cout << dp[0][m];

  return 0;
}
