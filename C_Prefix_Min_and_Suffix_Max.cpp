// Author :- Tushar || 01-07-2025 20:17:06
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
  for (auto &it : arr) cin >> it;

  vector<int> ans(n, 0);

  int minn = INT_MAX;
  for (int i = 0; i < n; i++) {
    minn = min(minn, arr[i]);
    if (arr[i] == minn) ans[i] = 1;
  }
  int maxx = -1;

  for (int i = n - 1; i >= 0; i--) {
    maxx = max(maxx, arr[i]);
    if (arr[i] == maxx) ans[i] = 1;
  }

  for (auto it : ans) cout << it;
  cout << endl;
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
