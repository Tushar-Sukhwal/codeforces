// Author :- Tushar || 13-09-2024 11:12:03
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
int recc(vector<int>& dp, int n, int k) {
  if (n == 0) return 1;
  if (dp[n] != -1) return dp[n];

  int sum = 0;
  if (n - 1 >= 0) sum = (sum + recc(dp, n - 1, k)) % mod;
  if (n - k >= 0) sum = (sum + recc(dp, n - k, k)) % mod;

  return dp[n] = sum % mod;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt, k;

  cin >> tt >> k;
  vector<pair<int, int>> arr;
  int maxx = 0;
  for (int i = 0; i < tt; i++) {
    int a, b;
    cin >> a >> b;
    arr.push_back({a, b});
    maxx = max({maxx, a, b});
  }
  vector<int> dp(maxx + 1, -1);
  recc(dp, maxx, k);

  dp[0] = 0;
  int sum = 0;
  for (int i = 0; i <= maxx; i++) {
    sum += dp[i];
    sum = sum % mod;
    dp[i] = sum;
  }
  for (auto it : arr) {
    cout << (dp[it.second] - dp[it.first - 1] + mod) % mod << endl;
  }

  return 0;
}
