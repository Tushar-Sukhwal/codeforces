// Author :- Tushar || 10-03-2025 20:18:08
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
  int n, x;
  cin >> n >> x;

  int sum = 0;
  vector<int> arr(n);
  for (auto &it : arr) {
    cin >> it;
    sum += it;
  }
  if (sum % x == 0 && sum / n == x) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
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
