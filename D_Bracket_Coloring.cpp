// Author :- Tushar || 14-01-2025 21:06:21
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

    int count = 0;

    vector<int> ans;

    if (str.front() == ')') {
      for (auto &it : str)
        if (it == '(')
          it = ')';
        else
          it = '(';
    }

    int flag = 0;
    int de = 1;
    for (auto it : str) {
      if (count < 0)
        de = 2;
      else
        de = 1;
      if (it == '(') {
        count++;
      } else {
        count--;
      }

      if (count > 0)
        ans.push_back(1);
      else if (count < 0) {
        ans.push_back(2);
        flag = 1;
      } else {
        ans.push_back(de);
      }
    }

    if (count == 0) {
      if (flag)
        cout << 2 << endl;
      else
        cout << 1 << endl;

      for (auto it : ans) cout << it << " ";
      cout << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
