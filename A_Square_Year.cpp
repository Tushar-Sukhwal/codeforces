// Author :- Tushar || 02-06-2025 21:05:18
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
  int num = stoi(str);
  int temp = sqrt(num);
  if (temp * temp == num) {
    cout << 0 << " " << sqrt(num) << endl;
    return;
  } else {
    cout << -1 << endl;
    return;
  }
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
