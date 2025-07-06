// Author :- Tushar || 23-06-2025 20:11:56
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

  for (int i = 1; i < n; i++) {
    if (abs(arr[i] - arr[i - 1]) <= 1) {
      cout << 0 << endl;
      return;
    }
  }

  for (int i = 2; i < n; i++) {
    if (max(arr[i - 2], arr[i - 1]) >= arr[i] - 1 &&
        min(arr[i - 2], arr[i - 1]) <= arr[i] + 1) {
      cout << 1 << endl;
      return;
    }
  }
  for (int i = 0; i < n - 2; i++) {
    if (max(arr[i + 1], arr[i + 2]) >= arr[i] - 1 &&
        min(arr[i + 1], arr[i + 2]) <= arr[i] + 1) {
      cout << 1 << endl;
      return;
    }
  }
  cout << -1 << endl;
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
