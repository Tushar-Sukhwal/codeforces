// Author :- Tushar || 14-01-2025 17:30:12
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

int func(int ind, vector<int>& freq, vector<int>& dp) {
  if (ind > 1e5) return 0;
  if (dp[ind] != -1) return dp[ind];

  int ans = ind * freq[ind] + func(ind + 2, freq, dp);
  ans = max(ans, func(ind + 1, freq, dp));

  return dp[ind] = ans;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  vector<int> freq(1e5 + 1, 0);
  for (auto it : arr) freq[it]++;

  vector<int> dp(1e5 + 1, -1);

  cout << func(0, freq, dp);

  return 0;
}
