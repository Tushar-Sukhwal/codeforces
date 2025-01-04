// Author :- Tushar || 29-12-2024 20:10:31
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

  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &it : arr) cin >> it;

  sort(arr.begin(), arr.end());

  cout << arr[(n ) / 2] << endl;

  return 0;
}
