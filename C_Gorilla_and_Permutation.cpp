// clang-format off
// Author :- Tushar || 11-07-2024 20:18:02
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
    int n, m, k;
    cin >> n >> m >> k;
    deque<int> arr;
    for (int i = 1; i <= m; i++) {
      arr.push_back(i);
    }
    for (int i = m + 1; i < k; i++) {
      arr.push_front(i);
    }
    for (int i = k; i <= n; i++) {
      arr.push_front(i);
    }
    for (auto it : arr) cout << it << " ";
    cout << endl;
  }

  return 0;
}
