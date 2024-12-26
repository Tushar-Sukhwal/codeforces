// Author :- Tushar || 24-12-2024 10:57:57
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

  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  int mod = 1e9 + 7;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 6; j++) {
      if (i - j >= 0) dp[i] = (dp[i] + dp[i - j]) % mod;
    }
  }
  cout << dp[n] << endl;

  return 0;
}
