// Author :- Tushar || 05-02-2025 21:25:22
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
  set<int> left, right;
  left.insert(-1);

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i == 0 || i % 2) {
      if (arr[i] == 0) right.insert(i);
    } else if (i % 2 == 0 && arr[i] == 1) {
      left.insert(i);
    }
  }
  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    if (u == 0 || u % 2 == 1)
      if (v == 0)
        right.insert(u);
      else
        right.erase(u);

    else if (v == 1)
      left.insert(u);
    else
      left.erase(u);

    auto it = prev(left.end());
    if (right.lower_bound(*it) == right.end())
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }
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
