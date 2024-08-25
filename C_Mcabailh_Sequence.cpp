// clang-format off
// Author :- Tushar || 27-07-2024 11:11:40
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
  int x, y, m, a;
  cin >> x >> y >> m >> a;

  int start = (x * a + y) % m;

  int curr;
  curr = (x * start + y) % m;
  vector<int> arr;
  arr.push_back(start);
  for (int i = 0; i < 1e6; i++) {
    arr.push_back(curr);
    curr = (x * curr + y) % m;
  }
  int flag = 0;
  int ans = 0;
  for (int i = m / (x + 1); i < 1e6; i++) {
    for (int j = i + 1; j < 1e6; j++) {
      if (arr[i] == arr[j]) {
        ans = j - i;
        flag = 1;
        break;
      }
    }
    if (flag) break;
  }

  cout << ans << endl;

  return 0;
}
