// Author :- Tushar || 03-04-2025 20:08:37
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
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> arr(n);
  for (auto &it : arr) cin >> it;

  int sum = 0;
  for (auto it : arr) sum += it;

  int loop = x / sum;
  int ex = x % sum;
  int i;
  int flag = 0;
  for (i = n - 1; i >= 0; i--) {
    if (ex == 0) flag = 1;
    if (ex < 0) break;

    ex -= arr[i];
  }
  if (n * k - loop * n - (n - i - 2) < 0) {
    cout << 0 << endl;
    return;
  }
  if (flag)
    cout << n * k - loop * n - (n - i - 2) + 1 << endl;
  else
    cout << n * k - loop * n - (n - i - 2) << endl;
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
