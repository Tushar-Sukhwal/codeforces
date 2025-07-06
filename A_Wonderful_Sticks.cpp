// Author :- Tushar || 19-04-2025 20:08:03
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
  string s;
  cin >> n >> s;
  vector<int> res;
  int l = 0, r = 2;

  res.push_back(1);
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == '<') {
      res.push_back(l);
      l--;
    } else {
      res.push_back(r);
      r++;
    }
  }

  int minn = l + 1;
  minn = minn * -1 + 1;

  for (int i = 0; i < n; i++) {
    res[i] = res[i] + minn;
  }
  for (auto it : res) cout << it << " ";
  cout << endl;
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
