// Author :- Tushar || 22-03-2025 20:06:11
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
  string s;
  cin >> s;
  string rev = s;
  reverse(rev.begin(), rev.end());

  if (rev <= s && k == 0) {
    cout << "NO\n";
    return;
  }
  int mark = 0; 
  for (int i = 1; i < n ; i++) {
    if (rev[i - 1] != rev[i]) mark = 1;
  }
  if (mark == 0) {
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;
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
