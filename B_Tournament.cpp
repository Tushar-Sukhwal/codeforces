// Author :- Tushar || 01-07-2025 20:10:19
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
  int n, j, k;
  cin >> n >> j >> k;
  vector<int> arr(n);
  int maxx = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    maxx = max(maxx, arr[i]);
  }

  int p = arr[j - 1];

  if (k == 1) {
    if (p == maxx)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
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
