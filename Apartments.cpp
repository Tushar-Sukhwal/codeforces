// clang-format off
// Author :- Tushar || 12-07-2024 17:02:15
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
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  vector<int> vec(m);
  for (int i = 0; i < m; i++) cin >> vec[i];

  sort(vec.begin(), vec.end());
  sort(arr.begin(), arr.end());

  int i = 0, j = 0;
  int count = 0;

  while (i < n && j < m) {
    if (arr[i] >= vec[j] - k && arr[i] <= vec[j] + k) {
      count++;
      i++;
      j++;
    } else if (arr[i] > vec[j]) {
      j++;
    } else
      i++;
  }

  cout << count << endl;

  return 0;
}
