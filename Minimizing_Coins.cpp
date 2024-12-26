// Author :- Tushar || 24-12-2024 11:17:59
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
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  vector<int> dp(m + 1, 1e8);
  dp[0] = 0;

  for (int i = 1; i <= m; i++) {
    for (int j = 0; j < n; j++) {
      if (i - arr[j] >= 0) dp[i] = min(dp[i], dp[i - arr[j]] + 1);
    }
  }
  if (dp[m] == 1e8)
    cout << -1 << endl;
  else
    cout << dp[m] << endl;

  return 0;
}
