#include <bits/stdc++.h>

#define ll long long

using namespace std;

#define MOD 1000000007

void solve() {
  int n, k;
  cin >> n >> k;
  set<int> free_row;
  set<int> free_col;
  for (int i = 1; i <= n; i++) {
    free_row.insert(i);
    free_col.insert(i);
  }
  for (int i = 1; i <= k; i++) {
    int x, y;
    cin >> x >> y;
    free_row.erase(x);
    free_col.erase(y);
    free_row.erase(y);
    free_col.erase(x);
  }
  int now = free_row.size();
  vector<ll> dp(now + 1);
  dp[0] = 1;
  for (int i = 1; i <= now; i++) {
    dp[i] += dp[i - 1];
    dp[i] %= MOD;
    if (i - 2 >= 0) {
      ll other = (i - 1) * (dp[i - 2]);
      other %= MOD;
      other *= 2;
      other %= MOD;
      dp[i] += other;
      dp[i] %= MOD;
    }
  }
  cout << dp[now] << '\n';
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    solve();
  }

  return 0;
}