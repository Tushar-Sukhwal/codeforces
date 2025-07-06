// Author :- Tushar || 08-04-2025 20:13:21
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

bool isPrime(int n) {
  if (n == 1) {
    return false;
  }
  int i = 2;
  while (i * i <= n) {
    if (n % i == 0) {
      return false;
    }
    i += 1;
  }
  return true;
}

void solve() {
  int n, k;
  cin >> n >> k;

  if (n == 1 && k == 2) {
    cout << "YES" << endl;
    return;
  }
  if (k > 1) {
    cout << "NO" << endl;
    return;
  }
  if (isPrime(n)) {
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
