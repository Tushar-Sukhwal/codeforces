// Author :- Tushar || 11-01-2025 15:44:54
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

  string str;
  cin >> str;

  for (auto it : str) {
    if (it == 'm' || it == 'w') {
      cout << 0 << endl;
      return 0;
    }
  }

  vector<vector<int>> dp(1e5 + 1, vector<int>(2, 0));
  int mod = 1e9 + 7;
  dp[0][1] = 1;
  dp[1][1] = 1;

  for (int i = 2; i < 1e5 + 1; i++) {
    dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
    dp[i][1] = (dp[i - 2][0] + dp[i - 2][1]) % mod;
  }
  int ans = 1;
  int n = 1, u = 1;

  for (int i = 1; i < str.size(); i++) {
    if (str[i] == 'n' && str[i - 1] == 'n')
      n++;
    else {
      if (n > 1) ans = (ans * (dp[n][0] + dp[n][1])) % mod;
      n = 1;
    }
  }
  if (n > 1) ans = (ans * (dp[n][0] + dp[n][1])) % mod;
  for (int i = 1; i < str.size(); i++) {
    if (str[i] == 'u' && str[i - 1] == 'u')
      u++;
    else {
      if (u > 1) ans = (ans * (dp[u][0] + dp[u][1])) % mod;
      u = 1;
    }
  }
  if (u > 1) ans = (ans * (dp[u][0] + dp[u][1])) % mod;
  cout << ans << endl;

  return 0;
}
