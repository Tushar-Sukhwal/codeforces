// Author :- Tushar || 24-12-2024 20:11:14
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
    int n, d;
    cin >> n >> d;

    cout << 1 << " ";
    bool two = false, three = false;

    if ((d % 3 == 0) || n > 2) {
      cout << 3 << " ";
      three = true;
    }

    if ((d == 0 || d == 5)) cout << 5 << " ";

    if ((n >= 3) || (d == 7)) cout << 7 << " ";

    if (n >= 6 || (n > 2 && (d % 3 == 0)) || (n == 2 && d == 9)) {
      cout << 9 << " ";
    }

    cout << endl;
  }
  return 0;
}
