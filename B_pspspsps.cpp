// Author :- Tushar || 20-12-2024 20:51:10
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
    int n;
    cin >> n;
    string str;
    cin >> str;

    int s = 0;
    int p = 0;
    for (int i = 0; i < str.size(); i++) {
      if (str[i] == 'p')
        p++;
      else if (str[i] == 's')
        s++;
    }

    if (s > 1 && p > 1)
      cout << "NO\n";
    else {
      if (s == 0 || p == 0)
        cout << "YES\n";
      else {
        if (s == 1) {
          if (str.front() == 's')
            cout << "YES\n";
          else
            cout << "NO\n";
        } else {
          if (str.back() == 'p')
            cout << "YES\n";
          else
            cout << "NO\n";
        }
      }
    }
  }

  return 0;
}
