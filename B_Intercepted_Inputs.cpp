// Author :- Tushar || 23-11-2024 19:09:53
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
    int k;
    cin >> k;
    vector<int> arr(k);
    set<int> st;
    int pro = k - 2;
    pair<int, int> ans;
    int flag = 0;
    for (int i = 0; i < k; i++) {
      int a;
      cin >> a;

      if (flag) continue;

      if (pro % a == 0) {
        if (st.count(pro / a)) {
          ans = make_pair(a, pro / a);
          flag = 1;
        }
      }

      st.insert(a);
      arr[i] = a;
    }

    cout << ans.first << " " << ans.second << endl; 
  }

  return 0;
}
