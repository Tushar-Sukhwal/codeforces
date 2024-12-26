// Author :- Tushar || 21-09-2024 20:16:07
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
    int k;
    cin >> k;
    int gold = 0, count = 0;

    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      if (num >= k) {
        gold += num;
      }
      if (num == 0 && gold > 0) {
        count++;
        gold--;
      }
    }
    cout << count << endl;
  }

  return 0;
}
