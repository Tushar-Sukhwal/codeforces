// Author :- Tushar || 22-12-2024 20:11:12
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
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int sum = a + b + c;

    int cycle = n / sum;
    int tot = cycle * sum;
    int days = cycle * 3;

    if (tot >= n) {
      cout << days << "\n";
      continue;
    }

    if (tot + a >= n) {
      cout << days + 1 << "\n";
    } else if (tot + a + b >= n) {
      cout << days + 2 << "\n";
    } else {
      cout << days + 3 << "\n";
    }
  }

  return 0;
}
