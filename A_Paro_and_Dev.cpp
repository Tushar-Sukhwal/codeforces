// Author :- Tushar || 23-01-2025 21:51:17
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

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int hash = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '#') hash++;
    }
    int h = 0, ind = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '#') {
        h++;
      }
      if (h == hash / 2) {
        ind = i;
        break;
      }
    }
    int ans = 0;
    int x = 0;
    for (int i = ind - 1; i >= 0; i--) {
      if (s[i] == '.')
        x++;
      else {
        ans += x;
      }
    }
    x = 0;
    for (int i = ind + 1; i < n; i++) {
      if (s[i] == '.')
        x++;
      else
        ans += x;
    }
    cout << ans << endl;
  }

  return 0;
}
