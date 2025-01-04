// Author :- Tushar || 28-12-2024 20:06:48
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int flg = 0;

    for (int i = 0; i < n; i++) {
      if (i) {
        if (2 * min(arr[i], arr[i - 1]) > max(arr[i], arr[i - 1])) {
          flg = 1;
        }
      }
    }

    if (flg)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
