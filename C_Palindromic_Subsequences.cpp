// Author :- Tushar || 17-01-2025 21:08:38
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
    vector<int> ans = {1, 1, 2, 3, 1, 2};
    if (n == 6) {
      for (auto it : ans) cout << it << " ";
      cout << endl;
      continue;
    }
    vector<int> arr;
    for (int i = 1; i <= n - 2; i++) arr.push_back(i);
    arr.push_back(1);
    arr.push_back(2);
    for (auto it : arr) cout << it << " ";
    cout << endl;
  }

  return 0;
}
