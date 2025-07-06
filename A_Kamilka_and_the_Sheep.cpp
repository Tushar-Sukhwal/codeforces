// Author :- Tushar || 29-03-2025 20:06:01
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
  vector<int> arr(n);
  int maxx = 0;
  int minn = 1e9 + 1;
  for (auto &it : arr) {
    cin >> it;
    maxx = max(maxx, it);
    minn = min(minn, it);
  }
  cout << maxx - minn << endl;
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
