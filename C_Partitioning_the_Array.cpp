// clang-format off
// Author :- Tushar || 11-07-2024 09:18:20
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

vector<int> printDivisors(int n) {
  vector<int> arr;
  // Note that this loop runs till square root
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      // If divisors are equal, print only one
      if (n / i == i)
        arr.push_back(i);

      else {
        arr.push_back(i);
        arr.push_back(n / i);
      }
    }
  }
  return arr;
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    vector<int> fac = printDivisors(n);
    debug(fac, arr);
    int count = 0;
    for (auto it : fac) {
      int flag = 0;
      for (int i = 0; i < it; i++) {
        for (int j = i + it; j < n; j += it) {
          flag = __gcd(flag, abs(arr[j] - arr[j - it]));
          debug(flag, j, j - it);
          debug(flag, arr[j], arr[j - it]);
        }
      }
      if (flag != 1) count++;
    }
    cout << count << endl;
  }

  return 0;
}
