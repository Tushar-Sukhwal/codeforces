// Author :- Tushar || 29-03-2025 20:12:32
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
  int n;
  cin >> n;
  string a, b;
  cin >> a >> b;

  int eve = 0, odd = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      if (a[i] == '0') odd++;
      if (b[i] == '0') eve++;
    } else {
      if (b[i] == '0') odd++;
      if (a[i] == '0') eve++;
    }
  }

  if (eve >= n / 2 && odd >= (n + 1) / 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
