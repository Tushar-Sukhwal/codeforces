// Author :- Tushar || 24-12-2024 20:22:49
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

  for (int i = 0; i < 1000000000; i++) {
    string str = to_string(i * 7);
    set<char> st;
    for (auto it : str) st.insert(it);
    if (st.size() == 1) cout << str << endl;
  }

  return 0;
}
