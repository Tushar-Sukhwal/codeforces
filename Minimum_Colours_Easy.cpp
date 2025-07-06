#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  vector<int> dp(n + 2, 0);
  vector<int> best(n + 1, INT_MAX);

  for (int i = n; i >= 1; i--) {
    dp[i] = 1 + dp[i + 1];
    if (best[a[i]] != INT_MAX) {
      dp[i] = min(dp[i], best[a[i]]);
    }
    best[a[i]] = min(best[a[i]], dp[i + 1]);
  }

  return dp[1];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    cout << solve() << "\n";
  }

  return 0;
}