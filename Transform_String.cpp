// Author :- Tushar || 05-02-2025 20:16:37
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
  string a, b;
  cin >> a >> b;

  if (a.size() < b.size()) {
    cout << -1 << endl;
    return;
  }

  int l = a.size() - 1, r = b.size() - 1;
  vector<int> keep(a.size(), 0);
  int temp = 0;

  while (l >= 0 && r >= 0) {
    if (a[l] == b[r]) {
      keep[l] = 1;
      l--;
      r--;
      temp++;
    } else {
      l--;
    }
  }

  if (temp < b.size()) {
    cout << -1 << endl;
    return;
  }

  int cost = 0;
  int curr = 1;



  for (int i = 0; i < keep.size(); i++) {
    if (keep[i] == 0)
      cost += curr;
    else
      curr++;
  }
  cout << cost << endl;
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
