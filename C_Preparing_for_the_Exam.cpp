// Author :- Tushar || 22-12-2024 20:16:04
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(m);
    for (int i = 0; i < m; i++) cin >> arr[i];
    vector<int> brr(k);
    for (int i = 0; i < k; i++) cin >> brr[i];

    set<int> st(brr.begin(), brr.end());

    for (int i = 0; i < m; i++) {
      if (n == k)
        cout << 1;
      else if (k + 1 == n) {
        if (!st.count(arr[i]))
          cout << 1;
        else
          cout << 0;
      } else {
        cout << 0;
      }
    }
    cout << endl;
  }

  return 0;
}
