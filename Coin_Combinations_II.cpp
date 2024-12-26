// Author :- Tushar || 24-12-2024 18:08:17
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

  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int mod = 1e9 + 7;

  vector<vector<int>> dp(n + 1, vector<int>(x + 1));

  for (int i = 0; i < n; i++) dp[i][0] = 1;

  for (int i = n - 1; i >= 0; i--) {
    for (int sum = 1; sum <= x; sum++) {
      int skipping = dp[i + 1][sum];
      int picking = 0;
      if (a[i] <= sum) {
        picking = dp[i][sum - a[i]];
      }
      dp[i][sum] = (skipping + picking) % mod;
    }
  }
  cout << dp[0][x] << endl;

  return 0;
}
