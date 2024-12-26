// Author :- Tushar || 24-12-2024 18:31:09
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
  vector<string> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  int mod = 1e9 + 7;

  vector<vector<int>> dp(n, vector<int>(n, 0));
  if (arr[0][0] == '.') dp[0][0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] == '.') {
        if (i - 1 >= 0) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
        if (j - 1 >= 0) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % mod;
      }
    }
  }
  cout << dp[n - 1][n - 1];

  return 0;
}
