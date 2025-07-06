// Author :- Tushar || 10-03-2025 20:25:26
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
  int n, k;
  cin >> n >> k;
  vector<int> arr(n, n);

  if (k % 2 != 0) {
    arr[n - 1] = n - 1;
  } else {
    for (auto &it : arr) it = n - 1;
    arr[n - 2] = n;
  }

  for (auto it : arr) cout << it << " ";
  cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
