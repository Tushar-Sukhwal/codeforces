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
    vector<int> arr;
    int alice = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a % 2 == 0)
        arr.push_back(a);
      else
        alice += a;
    }
    int bob = 0;
    sort(arr.begin(), arr.end(), greater<int>());
    debug(arr);
    for (int i = 0; i < arr.size(); i++) {
      if (alice > 0) {
        if (i % 2 == 0)
          bob += arr[i];
        else
          alice += arr[i];
      } else {
        bob += arr[i];
      }
    }
    cout << alice - bob << endl;
  }

  return 0;
}

