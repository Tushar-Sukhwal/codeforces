// clang-format off
// Author :- Tushar || 07-07-2024 20:53:05
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

bool solve(vector<int>& first, vector<int>& second, vector<int>& third,
           int target, vector<int> order) {
  int n = first.size();
  int s1 = 0, s2 = 0, s3 = 0;
  vector<int> ans;
  int iter = 0;
  bool f1 = false, f2 = false, f3 = false;

  ans.push_back(iter);
  while (iter < n) {
    s1 += first[iter];
    iter++;
    if (s1 >= target) {
      f1 = true;
      break;
    }
  }

  ans.push_back(iter - 1);
  ans.push_back(iter);

  while (iter < n) {
    s2 += second[iter];
    iter++;
    if (s2 >= target) {
      f2 = true;
      break;
    }
  }

  ans.push_back(iter - 1);
  ans.push_back(iter);

  while (iter < n) {
    s3 += third[iter];
    iter++;
    if (s3 >= target) {
      f3 = true;
      break;
    }
  }

  ans.push_back(iter - 1);
  debug(ans);

  if (f1 && f2 && f3) {
    for (int i = 0; i < 3; i++)
      cout << ans[order[i] * 2 - 2] + 1 << " " << ans[order[i] * 2 - 1] + 1
           << " ";
    cout << endl;
    return true;
  }

  return false;
}

int32_t main() {
  fastio;
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }

    int target = (sum + 2) / 3;
    debug(target);

    bool flag = false;

    if (solve(a, b, c, target, {1, 2, 3}) ||
        solve(a, c, b, target, {1, 3, 2}) ||
        solve(b, a, c, target, {2, 1, 3}) ||
        solve(b, c, a, target, {2, 3, 1}) ||
        solve(c, a, b, target, {3, 1, 2}) ||
        solve(c, b, a, target, {3, 2, 1})) {
      flag = true;
    }

    if (!flag) {
      cout << -1 << endl;
    }
  }

  return 0;
}
