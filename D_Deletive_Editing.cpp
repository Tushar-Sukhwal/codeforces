// Author :- Tushar || 27-12-2024 23:34:54
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
    string str1, str2;
    cin >> str1 >> str2;
    int ptr = str2.size() - 1;
    set<char> st;
    for (auto it : str2) st.insert(it);

    string temp;
    for (auto it : str1)
      if (st.count(it)) temp.push_back(it);

    int flag = 0;
    for (int i = temp.size() - 1; i >= 0; i--) {
      if (str2[ptr] == temp[i]) ptr--;
      if (ptr == -1) {
        flag = 1;
        break;
      }
    }
    if (temp.back() != str2.back()) flag = 0;
    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
