// Author :- Tushar || 20-12-2024 20:22:06
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
    vector<int> arr;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (i) {
        if (a != arr.back()) arr.push_back(a);
      } else
        arr.push_back(a);
    }

    if (arr.size() == 1 && arr[0] == 0) {
      cout << 0 << endl;
      continue;
    }

    int seg = 0;
    int flag = 1;

    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] != 0 && flag) {
        seg++;
        flag = 0;
      } else if (arr[i] == 0)
        flag = 1;
    }
    if (seg >= 2)
      cout << 2 << endl;
    else
      cout << 1 << endl;
  }

  return 0;
}
