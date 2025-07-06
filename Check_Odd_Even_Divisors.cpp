// Author :- Tushar || 02-07-2025 20:03:41
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
  int a, b;
  cin >> a >> b;

  if (b == 0) {
    cout << "YES" << endl;
    return;
  }

  if (a == 0) {
    cout << "NO" << endl;
    return;
  }

  if (a == 1 && b == 0) {
    cout << "YES" << endl;
    return;
  }

  if (a == 0 && b == 1) {
    cout << "NO" << endl;
    return;
  }

  if (a == 1 && b == 1) {
    cout << "YES" << endl;
    return;
  }

  if (b > a && b % a == 0) {
    cout << "YES" << endl;
    return;
  }

  if (b == 0) {
    cout << "YES" << endl;
    return;
  }

  cout << "NO" << endl;
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
