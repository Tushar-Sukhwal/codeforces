// Author :- Tushar || 15-12-2024 20:16:03
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
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
      if (str[i] == 'q')
        str[i] = 'p';
      else if (str[i] == 'p')
        str[i] = 'q';
    }
    reverse(str.begin(), str.end());

    cout << str << endl;
  }

  return 0;
}
