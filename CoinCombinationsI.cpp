// Author :- Tushar
// Date:- 2024-04-10 14:47:16
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
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  for (int i = 0; i < n; i++) cin >> coins[i];
  vector<int> dp(x + 1, 0);
  dp[0] = 1;
  for (int i = 1; i < x + 1; i++) {
    for (auto it : coins) {
      if (it <= i) dp[i] = ((dp[i] + dp[i - it]) % mod);
    }
  }
  cout << dp[x] << endl;
  return 0;
}
