// Author :- Tushar || 11-01-2025 11:25:13
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

  int tt;
  cin >> tt;
  while (tt--) {
    int n, a, b;
    cin >> n >> a >> b;
    string str;
    cin >> str;
    int x = 0, y = 0;

    int flag = 0;
    for (int j = 0; j <= 100; j++) {
      for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'N')
          y++;
        else if (str[i] == 'S')
          y--;
        else if (str[i] == 'W')
          x--;
        else
          x++;
        if (x == a && y == b) {
          flag = 1;
          break;
        }
      }
      if (flag) break;
    }
    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
