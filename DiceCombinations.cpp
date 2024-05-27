// Author :- Tushar
// Date:- 2024-04-09 18:05:50
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
  vector<int> dp(n + 1);
  dp[0] = 1;

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j <= 6; j++) {
      if (j <= i) {
        dp[i] = (dp[i] + dp[i - j]) % mod;
      }
    }
  }
  cout << dp[n] << endl;

  return 0;
}
