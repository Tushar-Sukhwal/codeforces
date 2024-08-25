// clang-format off
// Author :- Tushar || 11-07-2024 19:23:36
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

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> left(n, 0);
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (i > 0) left[i] += count + left[i - 1];
      count += arr[i];
    }
    vector<int> right(n, 0);
    count = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (i < n - 1) right[i] += count + right[i + 1];
      count += arr[i];
    }
    for (int i = 0; i < n; i++) {
      cout << left[i] + right[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
