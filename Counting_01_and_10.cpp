// Author :- Tushar || 12-03-2025 21:01:12
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

  if (n % 2 != 0) {
    int t = n / 2;
    cout << n * t * (t + 1) / 2 - t * (t + 1) * (2 * t + 1) / 6 + t + 1 << endl;
  } else {
    int t = (n - 1) / 2;
    cout << n * t * (t + 1) / 2 - t * (t + 1) * (2 * t + 1) / 6 + t + 1 +
                (n / 2) * (n / 2) + 1;
    cout << endl;
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

