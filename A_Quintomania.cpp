// Author :- Tushar || 02-11-2024 21:02:33
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

    int last;
    cin >> last;

    int flag = 0;
    for (int i = 0; i < n - 1; i++) {
      int curr;
      cin >> curr;


      if ((abs(curr - last) == 5) || (abs(curr - last) == 7)) {
      } else {
        flag = 1;
      }

      last = curr;
    }

    if (flag)
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}
