// Author :- Tushar || 10-03-2025 20:45:59
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
  vector<int> arr(2 * n);
  for (auto &it : arr) cin >> it;
  sort(arr.begin(), arr.end(), greater<int>());

  int sum = 0;
  for (int i = 0; i < 2 * n; i++) {
    if (i % 2) {
      sum -= arr[i];
    } else
      sum += arr[i];
  }

  int flag = 0;

  if (sum <= 1e18 && sum >= 1) {
    for (auto it : arr)
      if (sum == it) {
        flag = 1;
        break;
      }
  }

  if (flag == 0) {
    cout << sum << " ";
    for (auto it : arr) cout << it << " ";
    cout << endl;
    return;
  }

  int x = arr.front();
  arr.erase(arr.begin(), arr.begin() + 1);

  sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (i % 2 == 0)
      sum += arr[i];
    else
      sum -= arr[i];
  }

  if (sum - x < 0) {
    cout << x << " ";
    for (int i = arr.size() - 1; i >= 0; i--) cout << arr[i] << " ";
    cout << (sum - x) * -1 << endl;
    return;
  }

  cout << x << " ";
  for (auto it : arr) cout << it << " ";
  cout << sum - x;
  cout << endl;
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
