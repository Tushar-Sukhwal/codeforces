// Author :- Tushar || 23-06-2025 20:33:18
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
  vector<int> a(n);
  for (auto& it : a) cin >> it;
  sort(a.begin(), a.end());
  int maxx = a[n - 1];
  int ans = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int sum = a[i] + a[j];

      int l = upper_bound(a.begin() + j + 1, a.end(), maxx - sum) - a.begin();

      int r = lower_bound(a.begin() + j + 1, a.end(), sum) - a.begin();

      if (l > r)
        continue;
      else
        ans += r - l;
    }
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
