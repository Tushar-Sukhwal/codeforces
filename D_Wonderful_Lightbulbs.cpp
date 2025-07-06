// Author :- Tushar || 19-04-2025 20:51:58
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
  vector<pair<int, int>> arr(n);
  for (auto &it : arr) cin >> it.first >> it.second;

  int x = 0;
  for (auto it : arr) x = x ^ it.first;

  int xy = 0;
  for (auto it : arr) xy = xy ^ (it.first + it.second);

  cout << x << " " << xy - x << endl;
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
