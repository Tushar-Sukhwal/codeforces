// clang-format off
// Author :- Tushar || 28-07-2024 20:15:10
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

int setKthBit(int n, int k) { return ((1 << k) | n); }

int fun(int& a, int b) {
  int count = 0;
  while (b) {
    if (b & 1) {
      a = setKthBit(a, count);
    }
    count++;
    b = b >> 1;
  }
  return a;
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    vector<int> ans(n, 0);

    for (int i = 0; i < n - 1; i++) {
      ans[i] = fun(ans[i], arr[i]);
      ans[i + 1] = fun(ans[i + 1], arr[i]);
    }

    vector<int> arr2;
    for (int i = 0; i < n - 1; i++) {
      int a = ans[i] & ans[i + 1];
      arr2.push_back(a);
    }

    if (arr2 == arr) {
      for (auto it : ans) cout << it << " ";
      cout << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
