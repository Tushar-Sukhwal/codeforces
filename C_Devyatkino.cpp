// Author :- Tushar || 11-02-2025 20:49:10
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

bool findd(string &str) {
  for (int i = 0; i < str.size(); i++)
    if (str[i] == '7') return true;
  return false;
}

void solve() {
  int n;
  cin >> n;

  string str = "";

  string num = to_string(n);
  if (findd(num)) {
    cout << 0 << endl;
    return;
  }
  int ans = 11;

  for (int i = 0; i < 9; i++) {
    str.push_back('9');
    int a = stoi(str);

    int temp = n;

    for (int j = 1; true; j++) {
      temp += a;
      string num = to_string(temp);
      if (findd(num)) {
        ans = min(ans, j);
        break;
      }
    }
  }
  cout << ans << endl;
  return;
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
