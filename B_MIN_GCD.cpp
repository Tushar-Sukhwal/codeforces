// Author :- Tushar || 05-04-2025 20:15:25
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
  vector<int> a(n);
  for (auto &x : a) cin >> x;

  int minn = *min_element(a.begin(), a.end());

  int cnt = 0;
  for (auto it : a)
    if (it == minn) cnt++;

  if (cnt >= 2) {
    cout << "Yes" << endl;
    return;
  }

  vector<int> ele;
  for (int x : a) {
    if (x % minn == 0 && x != minn) {
      ele.push_back(x);
    }
  }

  if (ele.empty()) {
    cout << "No" << endl;
    return;
  }

  int cg = ele[0];
  for (int it : ele) {
    cg = gcd(cg, it);
  }

  if (cg == minn)
    cout << "YES" << endl;
  else
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
