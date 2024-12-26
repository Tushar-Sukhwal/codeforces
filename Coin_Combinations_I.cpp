// Author :- Tushar || 24-12-2024 11:30:29
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
  int mod = 1e9 + 7;

  vector<int> dp(m + 1, 0);
  dp[0] = 1;

  for (int i = 1; i <= m; i++) {
    for (int j = 0; j < n; j++) {
      if (i - arr[j] >= 0) dp[i] = (dp[i] + dp[i - arr[j]]) % mod;
    }
  }
  cout << dp[m]; 

  return 0;
}
