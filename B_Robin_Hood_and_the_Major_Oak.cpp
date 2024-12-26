// Author :- Tushar || 21-09-2024 20:19:43
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

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;

    if (n > 3 && k >= 3) {
      cout << "YES" << endl;
      continue;
    }

    if (k == 1) {
      if (n == 1)
        cout << "NO" << endl;
      else
        cout << "YES" << endl;
      continue;
    }
    if (k == 2) {
      cout << "NO" << endl;
      continue;
    }
    cout << "NO" << endl;
  }

  return 0;
}
