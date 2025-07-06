// Author :- Tushar || 26-03-2025 20:38:41
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

int calc(int x, int y, int val, int total) {
  return max(x - val, 0LL) + max(y - (total - val), 0LL);
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  int sum = 0;

  for (auto &it : arr) {
    cin >> it;
    sum += it;
  }

  sort(arr.begin(), arr.end());
  int q;
  cin >> q;

  while (q--) {
    int x, y;
    cin >> x >> y;

    auto it = lower_bound(arr.begin(), arr.end(), x);
    int idx = it - arr.begin();
    if (idx == n) idx--;

    int res = calc(x, y, arr[idx], sum);

    if (idx > 0) {
      res = min(res, calc(x, y, arr[idx - 1], sum));
    }

    cout << res << '\n';
  }
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