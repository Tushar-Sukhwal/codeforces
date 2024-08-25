// clang-format off
// Author :- Tushar || 15-07-2024 20:43:08
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

int turnOffK(int n, int k) {
  if (k <= 0) return n;
  return (n & ~(1LL << (k - 1)));
}

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    int count = 0;
    vector<int> bit;

    int temp = n;
    int ct = 0;
    while (n) {
      if (n & 1 == 1) {
        bit.push_back(ct);
        count++;
      }
      n = n >> 1;
      ct++;
    }

    if (bit.size() == 1) {
      cout << 1 << endl;
      cout << temp << endl;
      continue;
    }

    debug(bit);
    vector<int> ans;
    ans.push_back(temp);

    for (int i = 0; i < count; i++) {
      ans.push_back(turnOffK(temp, bit[i] + 1));
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto it : ans) cout << it << " ";
    cout << endl;
  }

  return 0;
}
