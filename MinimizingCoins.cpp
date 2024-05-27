// Author :- Tushar
// Date:- 2024-04-10 00:50:23
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
// const ll mod = 1000000007;
// const ll mod = 998244353;

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> dp(x + 1, 1e9);

  dp[0] = 0;

  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < n; j++) {
      if (a[j] <= i) {
        dp[i] = min(dp[i], dp[i - a[j]] + 1);
      }
    }
  }
  return 0;
}
