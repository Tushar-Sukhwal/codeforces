// Author :- Tushar || 19-04-2025 20:17:29
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
  int n, k;
  cin >> n >> k;
  vector<int> l(n), r(n);
  for (auto &it : l) cin >> it;
  for (auto &it : r) cin >> it;
  int val = 0;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int tot = l[i] + r[i];
    int m = max(l[i], r[i]);
    val += m;
    arr.push_back(tot - m);
  }
  sort(arr.begin(), arr.end(), greater<int>());
  int sum = 0;
  for (int i = 0; i < k - 1 && i < n; i++) {
    sum += arr[i];
  }
  cout << val + sum + 1 << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
