// Author :- Tushar || 02-07-2025 20:22:44
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
  int n, k;
  cin >> n >> k;

  vector<int> ans;

  int i;
  for (i = 0; i < k - 1; i++) {
    ans.push_back(i + 1);
  }
  for (int j = n; j > i; j--) {
    ans.push_back(j);
  }

  for (auto it : ans) cout << it << ' ';
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
