// Author :- Tushar || 25-06-2025 20:42:04
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

vector<int> printDivisors(int n) {
  vector<int> v;
  for (int i = 1; i * 1ll * i <= n; ++i) {
    if (n % i == 0) {
      v.push_back(i);
      if (i != n / i) v.push_back(n / i);
    }
  }
  return v;
}

void solve() {
  int x, y, z, c;
  cin >> x >> y >> z >> c;

  if (x == y) {
    cout << 0 << endl;
    return;
  }

  int ans = 2 * c;

  vector<int> dx = printDivisors(x);
  vector<int> dy = printDivisors(y);

  vector<int> ad = dx;
  for (int it : dy) {
    ad.push_back(it);
  }

  sort(ad.begin(), ad.end());

  vector<int> ud;
  for (int i = 0; i < ad.size(); i++) {
    if (i == 0 || ad[i] != ad[i - 1]) {
      ud.push_back(ad[i]);
    }
  }

  for (int it : ud) {
    int cost = llabs(z - it);
    int nx = __gcd(x, it);
    int ny = lcm(y, it);
    if (nx == ny) ans = min(ans, cost + c);

    nx = lcm(x, it);
    ny = __gcd(y, it);
    if (nx == ny) ans = min(ans, cost + c);
  }

  cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;
  while (tt--) solve();
  return 0;
}
