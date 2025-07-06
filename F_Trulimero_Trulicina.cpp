// Author :- Tushar || 13-04-2025 22:22:23
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
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int>> arr(n, vector<int>(m, 0));

  int temp = 1;

  if (k > m) {
    int temp = 1;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        arr[i][j] = temp;
        temp++;
        if (temp > k) temp = 1;
      }
    }
  } else if (k > n) {
    int temp = 1;
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < n; i++) {
        arr[i][j] = temp;
        temp++;
        if (temp > k) temp = 1;
      }
    }
  } else if ((k % n == 0 || n % k == 0) && (k % m == 0 || m % k == 0)) {
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        for (int j = 0; j < m; j++) {
          arr[i][j] = temp;
          temp++;
          if (temp > k) temp = 1;
        }
      } else {
        for (int j = m - 1; j >= 0; j--) {
          arr[i][j] = temp;
          temp++;
          if (temp > k) temp = 1;
        }
      }
    }
  } else if (k % n == 0) {
    int temp = 1;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        arr[i][j] = temp;
        temp++;
        if (temp > k) temp = 1;
      }
    }
  } else {
    int temp = 1;
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < n; i++) {
        arr[i][j] = temp;
        temp++;
        if (temp > k) temp = 1;
      }
    }
  }

  for (auto it : arr) {
    for (auto itt : it) cout << itt << " ";
    cout << endl;
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
