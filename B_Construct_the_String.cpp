// Author :- Tushar || 31-12-2024 00:32:39
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
    int n, a, b, i = 0;
    cin >> n >> a >> b;
    while (i < n) cout << (char)((i++ % b) + 'a');
    cout << endl;
  }

  return 0;
}

seg