// Author :- Tushar || 15-12-2024 20:18:45
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
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int tot = 0;
    int rem = 0;

    if (m > a) {
      tot += a;
      rem += m - a;
    } else {
      tot += m;
    }
    if (m > b) {
      tot += b;
      rem += m - b;
    } else {
      tot += m;
    }

    if (rem > c) {
      tot += c;
    } else
      tot += rem;

    cout << tot << endl;
  }

  return 0;
}
