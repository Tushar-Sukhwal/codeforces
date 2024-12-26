// Author :- Tushar || 08-09-2024 11:14:53
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  int ans = 0;

  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      ans += arr[i - 1] - arr[i];
      arr[i] = arr[i - 1];
    }
  }
  cout << ans << endl;

  return 0;
}
