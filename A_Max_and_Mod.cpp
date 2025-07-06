// Author :- Tushar || 05-04-2025 20:07:09
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

  if (n % 2 == 0) {
    cout << "-1" << endl;
    return;
  }
  vector<int> ans;
  ans.push_back(n);

  for (int i = 1; i < n; i++) ans.push_back(i);

  for (auto it : ans) cout << it << " ";
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
