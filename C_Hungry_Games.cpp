// clang-format off
// Author :- Tushar || 19-07-2024 14:10:49
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007;
// clang-format on 

int recc(int i, vector<int>& arr, vector<int>& dp, int x) {
  if (i >= arr.size()) return 0;
  if (dp[i] != -1) return dp[i];

  int sum = 0;
  int count = 0;

  for (int j = i; j < arr.size(); j++) {
    sum += arr[j];

    if (sum > x) {
      count += recc(j, arr, dp, x);
      break;
    }
    count++;
  }
  return dp[i] = count;
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (n == 1) {
      if (arr[0] > x)
        cout << 1 << endl;
      else
        cout << 0 << endl;

      continue;
    }

    vector<int> dp(n + 1, -1);

    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += recc(i, arr, dp, x);
    }
    cout << sum << endl;
  }

  return 0;
}
