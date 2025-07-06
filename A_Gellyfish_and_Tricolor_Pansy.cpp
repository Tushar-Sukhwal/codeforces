// Author :- Tushar || 31-05-2025 20:06:18
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
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int k = 1;

  if (min(a, c) >= min(b, d)) {
    cout << "Gellyfish" << endl;
  } else {
    cout << "Flower" << endl;
    }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
