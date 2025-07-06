// Author :- Tushar || 08-04-2025 21:11:32
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
  int n, m;
  cin >> n >> m;
  vector<string> arr(n);
  for (auto &it : arr) cin >> it;
  vector<vector<string>> b(m, vector<string>(n));
  for (auto &it : b)
    for (auto &itt : it) cin >> itt;

  vector<int> check(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i] == b[j][i]) {
        check[i] = 1;
        break;
      }
    }
  }

  for (auto it : check) {
    if (it == 0) {
      cout << -1 << endl;
      return;
    }
  }

  int maxi = 0;

  for (int i = 0; i < m; i++) {
    int temp = 0;
    for (int j = 0; j < n; j++) {
      if (arr[j] == b[i][j]) temp++;
    }
    maxi = max(maxi, temp);
  }

  cout << n + 2 * (n - maxi) << endl;
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
