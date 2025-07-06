// Author :- Tushar || 25-06-2025 20:18:25
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

  int ind = 0;
  int f1 = 0, f2 = 0;
  int sum = 0;
  int lst = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i];

    if (sum % 3 == 0) lst = i;

    if (sum % 3 == 1 && f1 == 0) {
      f1 = 1;
      ind = i;
    }
    if (sum % 3 == 2 && f2 == 0) {
      f2 = 1;
      ind = i;
    }
  }

  if (lst > ind) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return;
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
