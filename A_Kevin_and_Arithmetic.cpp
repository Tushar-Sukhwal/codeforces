// Author :- Tushar || 20-01-2025 20:06:41
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int odd = 0, eve = 0;
    for (auto it : arr) {
      if (it % 2)
        odd++;
      else
        eve++;
    }

    int ans = 0;

    if (eve) {
      ans += odd + 1;
    } else {
      ans = odd - 1;
    }

    cout << ans << endl;
  }

  return 0;
}
