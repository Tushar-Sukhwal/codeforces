// Author :- Tushar || 24-12-2024 20:05:45
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

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n <= 3) {
      cout << 1 << endl;
      continue;
    }
    int i = 0;
    while (pow(4, i + 1) <= n) i++;
    cout << (1LL << i) << endl;
  }
  return 0;
}