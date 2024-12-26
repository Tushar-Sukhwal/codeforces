#include <iostream>
#include <map>
#include <vector>
using namespace std;

const int MOD = 998244353;
const int MAX_SCORE = 4000000;

// Precompute the number of ways to form distinct configurations for each
// possible score up to MAX_SCORE
vector<int> precomputeConfigurations() {
  vector<int> dp(MAX_SCORE + 1, 0);
  dp[0] = 1;  // Base case: 1 way to get a score of 0 (no tiles used)

  for (int x = 2; x <= MAX_SCORE; x *= 2) {
    for (int i = x; i <= MAX_SCORE; ++i) {
      dp[i] = (dp[i] + dp[i - x]) % MOD;
    }
  }

  return dp;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  vector<int> queries(t);

  for (int i = 0; i < t; ++i) {
    cin >> queries[i];
  }

  vector<int> dp = precomputeConfigurations();

  for (int i = 0; i < t; ++i) {
    int y = queries[i];
    cout << dp[y] << "\n";
  }

  return 0;
}


