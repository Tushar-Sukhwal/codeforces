// Author :- Tushar || 20-01-2025 12:15:31
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
    int n, k;
    cin >> n >> k;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      mp[a]++;
    }

    int ans = 0;

    for (auto &[num, cnt] : mp) {
      if (mp.count(k - num)) {
        int temp = min(mp[k - num], mp[num]);
        mp[k - num] -= temp;
        mp[num] -= temp;

        if (num == k - num)
          ans += temp / 2;
        else
          ans += temp;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
