// Author :- Tushar || 24-12-2024 18:23:39
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
  vector<int> dp(n + 1, 1e9);

  dp[0] = 0;

  for (int i = 1; i <= n; i++) {
    int temp = i;
    while (temp) {
      if (i - temp % 10 >= 0) dp[i] = min(dp[i], dp[i - temp % 10] + 1);
      temp = temp / 10;
    }
  }

  cout << dp[n];

  return 0;
}
