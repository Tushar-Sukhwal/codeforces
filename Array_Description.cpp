// Author :- Tushar || 25-12-2024 11:32:46
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

bool valid(int x, int m) { return x >= 1 && x <= m; }

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  // dp[i][k] = number of ways to build a prefix of size i
  // such that the last element of prefix is k

  // base case dp[1][k] = 1 if(arr[0] = k, arr[0] = 0)

  int mod = 1e9 + 7;

  for (int i = 0; i <= m; i++) {
    if (arr[0] == i || arr[0] == 0) dp[1][i] = 1;
  }

  for (int i = 2; i <= n; i++) {
    for (int k = 1; k <= m; k++) {
      // finding dp[i][k] here
      if (arr[i - 1] != 0 && arr[i - 1] != k) {
        dp[i][k] = 0;
        continue;
      }

      for (int prev = k - 1; prev <= k + 1; prev++) {
        if (!valid(prev, m)) {
          continue;
        }
        // transition
        dp[i][k] = (dp[i][k] + dp[i - 1][prev]) % mod;
      }
    }
  }

  int ans = 0;
  for (int i = 1; i <= m; i++) {
    ans = (ans + dp[n][i]) % mod;
  }
  cout << ans << endl;

  return 0;
}
