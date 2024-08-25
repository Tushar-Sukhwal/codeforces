// clang-format off
// Author :- Tushar || 11-07-2024 20:11:39
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(k);
    for (int i = 0; i < k; i++) cin >> arr[i];

    int ind = -1;
    int max = INT_MIN;
    for (int i = 0; i < k; i++) {
      if (arr[i] > max) {
        max = arr[i];
        ind = i;
      }
    }
    int ans = 0;
    for (int i = 0; i < k; i++) {
      if (i != ind) {
        ans += arr[i] * 2 - 1;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
