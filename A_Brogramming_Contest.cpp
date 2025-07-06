// Author :- Tushar || 16-02-2025 20:05:21
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

    int flag = 1;
    int count = 0;

    for (int i = 0; i < n; i++) {
      if (flag && str[i] == '1') {
        flag = 0;
        count++;
      }
      if (flag == 0 && str[i] == '0') {
        flag = 1;
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}
