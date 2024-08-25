// clang-format off
// Author :- Tushar || 18-07-2024 20:18:17
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
    string a, b;
    cin >> a >> b;
    bool temp = false;
    bool ans = true;
    int i = 0;
    while (i < n) {
      if (a[i] == '0' && b[i] != a[i]) {
        if (!temp) {
          ans = false;
        }
      }
      if (a[i] != '0') temp = 1;
      i++;
    }
    if (ans) yes else no
  }

  return 0;
}
