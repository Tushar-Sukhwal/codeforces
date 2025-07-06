// Author :- Tushar || 11-02-2025 16:20:21
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

const int mod = 1e9 + 7;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> dp(2e5 + 11, 0);
  for (int i = 0; i < 10; i++) dp[i] = 1;
  for (int i = 10; i < 2e5 + 11; i++) dp[i] = (dp[i - 9] + dp[i - 10]) % mod;

  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    while (n) {
      ans = (ans + dp[m + (n % 10)]) % mod;
      n = n / 10;
    }
    cout << ans << endl;
  }

  return 0;
}
