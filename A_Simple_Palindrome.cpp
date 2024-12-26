// Author :- Tushar || 27-10-2024 07:33:37
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
    string str = "aeiou", ans;

    int a = n / 5, b = n % 5;

    int i = 0;
    for (; i < b; i++)
      for (int j = 0; j <= a; j++) ans.push_back(str[i]);

    for (; i < 5; i++)
      for (int j = 0; j < a; j++) ans.push_back(str[i]);

    cout << ans << endl;
  }

  return 0;
}
