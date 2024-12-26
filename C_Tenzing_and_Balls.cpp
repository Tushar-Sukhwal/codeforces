#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(int ind, vector<int>& dp, vector<vector<int>>& mp, vector<int>& arr) {
  if (ind == arr.size() - 1) return 1;
  if (ind == arr.size()) return 0;

  if (dp[ind] != -1) return dp[ind];

  int ans = solve(ind + 1, dp, mp, arr) + 1;

  auto it = upper_bound(mp[arr[ind]].begin(), mp[arr[ind]].end(), ind);
  for (; it != mp[arr[ind]].end(); it++) {
    ans = min(ans, solve(*it + 1, dp, mp, arr));
  }

  return dp[ind] = ans;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<vector<int>> mp(n + 1);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      mp[arr[i]].push_back(i);
    }
    vector<int> dp(n + 1, -1);

    cout << n - solve(0, dp, mp, arr) << endl;
  }
  return 0;
}