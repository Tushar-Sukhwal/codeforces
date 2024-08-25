// clang-format off
// Author :- Tushar || 27-07-2024 09:09:39
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
  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  sort(arr.begin(), arr.end());

  for (int i = 1; i <= n; i++) {
    if (arr[i - 1] != i) {
      cout << i;
      break;
    }
  }

  return 0;
}
