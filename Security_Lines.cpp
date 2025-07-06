// Author :- Tushar || 25-06-2025 20:00:34
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &x : arr) cin >> x;

  int ans = arr[0];

  for (int j = 1; j < n; ++j) {
    int t = max<int>(arr[j] + 1, j);
    ans = min(ans, t);
  }
  cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
