// Author :- Tushar || 29-12-2024 20:00:25
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

  int last = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > last + 15) {
      ans = last + 15;
      break;
    } else {
      last = arr[i];
    }
  }

  if (ans == 0)
    ans = arr.back() + 15;
  else
    ans = last + 15;

  if (ans > 90) ans = 90;
  cout << ans << endl;

  return 0;
}
