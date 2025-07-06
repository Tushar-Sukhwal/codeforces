// Author :- Tushar || 16-02-2025 20:14:15
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

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  int ans = 0;
  int prev = 0, next = 0;

  int cnt = 0;

  for (int i = 0; i < n; i++) {
    if (mp[arr[i]] == 1)
      cnt++;
    else
      cnt = 0;

    if (cnt > ans) {
      ans = cnt;
      prev = i - cnt;
      next = i;
    }
  }
  prev += 2;
  next += 1;
  if (ans == 0)
    cout << 0 << endl;
  else
    cout << prev << " " << next << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
