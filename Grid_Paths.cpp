// Author :- Tushar
// Date:- 2024-04-11 15:00:06
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define letsgooooooooooo            \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define test         \
  int Tushars_07;    \
  cin >> Tushars_07; \
  while (Tushars_07--)
#define endl "\n"
#define no cout << "NO \n";
#define yes cout << "YES \n";
const int mod = 1000000007;
// const ll mod = 998244353;

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  int n;
  cin >> n;
  vector<string> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  vector<vector<int>> dp(n, vector<int>(n, 0));

  dp[n - 1][n - 1] = 1;

  for (int i = n - 1; i >= 0; i--) {
    for (int j = n - 1; j >= 0; j--) {
      if (arr[i][j] == '*') {
        dp[i][j] = 0;
        continue;
      }

      if (j == n - 1 && i == n - 1) continue;
      if (j == n - 1)
        dp[i][j] = dp[i + 1][j];
      else if (i == n - 1)
        dp[i][j] = dp[i][j + 1];
      else
        dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % mod;
    }
  }
  cout << dp[0][0];

  return 0;
}
