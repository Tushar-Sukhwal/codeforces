// Author :- Tushar || 02-11-2024 21:14:47
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

    for (int i = 0; i < k; i++) {
      int a, b;
      cin >> a >> b;
      mp[a] += b;
    }

    vector<int> arr;

    for (auto it : mp) {
      arr.push_back(it.second);
    }

    sort(arr.begin(), arr.end(), greater<int>());

    int ans = 0;
    for (int i = 0; i < n && i < arr.size(); i++) {
      ans += arr[i];
    }
    cout << ans << endl;
  }

  return 0;
}
