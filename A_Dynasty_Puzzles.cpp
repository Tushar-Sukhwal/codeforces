// Author :- Tushar || 14-01-2025 18:56:12
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
  vector<vector<int>> dp(26, vector<int>(26, 0));

  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    int l = str.front() - 'a';
    int r = str.back() - 'a';

    for (int i = 0; i < 26; i++) {
      if (dp[i][l] > 0) dp[i][r] = max(dp[i][r], (int)(dp[i][l] + str.size()));
    }
    dp[l][r] = max(dp[l][r], (int)(str.size()));
  }
  int ans = 0;
  for (int i = 0; i < 26; i++) {
    ans = max(ans, dp[i][i]);
  }

  cout << ans;

  return 0;
}
