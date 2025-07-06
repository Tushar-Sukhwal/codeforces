// Author :- Tushar || 08-04-2025 20:10:31
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
  string str;
  cin >> str;

  int count = 0;
  while (str.back() == '0') {
    str.pop_back();
    count++;
  }

  for (int i = 0; i < str.size(); i++) {
    if (str[i] != '0') count++;
  }

  cout << count - 1 << endl;
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
